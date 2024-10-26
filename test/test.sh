cd ..
make
cd test
gcc -I ../ main.c ../libftprintf.a -o test
echo "Usando printf en archivo A"
./test > A
echo "Usando ft_printf en archivo B"
./test 1 > B
diff A B
