g++-11 --std=gnu++17 -O2 -Wall user.cpp -o user
g++-11 --std=gnu++17 -O2 -Wall brute.cpp -o brute
g++-11 --std=gnu++17 -O2 -Wall gen.cpp -o gen
for((i = 1; ; ++i)); do
    ./gen > tc.txt
    ./user < tc.txt > userop.txt
    ./brute < tc.txt > correctop.txt
    diff -i userop.txt correctop.txt > /dev/null || break
    echo "Passed test: " $i
done
echo "WA on the following test:"
cat tc.txt
echo "Your answer is:"
cat userop.txt
echo "Correct answer is:"
cat correctop.txt