g++-11 --std=gnu++17 -O2 -Wall user.cpp -o user
g++-11 --std=gnu++17 -O2 -Wall gen.cpp -o gen
for((i = 1; ; ++i)); do
    ./gen > tc.txt
    ./user < tc.txt > verdict.txt
    diff -i verdict.txt correct-verdict.txt > /dev/null || break
    echo "Passed test: " $i
done
echo "WA on the following test:"
cat tc.txt