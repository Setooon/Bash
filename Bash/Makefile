CC = gcc 
CFLAGS =-Wall -Wextra -Werror -std=c11
ALL_PATHS = cat/*.c cat/*.h grep/*.c grep/*.h

all: build 

test_cat: 
	cat fest1.txt > text1.txt && ./cat/s21_cat fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -b fest1.txt > text1.txt && ./cat/s21_cat -b fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -e fest1.txt > text1.txt && ./cat/s21_cat -e fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -n fest1.txt > text1.txt && ./cat/s21_cat -n fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -s fest1.txt > text1.txt && ./cat/s21_cat -s fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -t fest1.txt > text1.txt && ./cat/s21_cat -t fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -b fest1.txt > text1.txt && ./cat/s21_cat --number-nonblank fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -n fest1.txt > text1.txt && ./cat/s21_cat --number fest1.txt > text2.txt && diff text1.txt text2.txt
	cat -s fest1.txt > text1.txt && ./cat/s21_cat --squeeze-blank fest1.txt > text2.txt && diff text1.txt text2.txt

test_grep: 
	grep "h" fest1.txt > text1.txt && ./grep/s21_grep "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -i "h" fest1.txt > text1.txt && ./grep/s21_grep -i "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -v "h" fest1.txt > text1.txt && ./grep/s21_grep -v "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -c "h" fest1.txt > text1.txt && ./grep/s21_grep -c "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -l "h" fest1.txt > text1.txt && ./grep/s21_grep -l "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -n "h" fest1.txt > text1.txt && ./grep/s21_grep -n "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -h "h" fest1.txt > text1.txt && ./grep/s21_grep -h "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -s "h" fest1.txt > text1.txt && ./grep/s21_grep -s "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -e "h" fest1.txt > text1.txt && ./grep/s21_grep -e "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -o "h" fest1.txt > text1.txt && ./grep/s21_grep -o "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -i "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -i "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -v "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -v "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -c "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -c "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -l "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -l "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -n "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -n "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -h "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -h "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -e "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -e "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -s "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -s "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -iv "h" fest1.txt > text1.txt && ./grep/s21_grep -v "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -ic "h" fest1.txt > text1.txt && ./grep/s21_grep -c "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -il "h" fest1.txt > text1.txt && ./grep/s21_grep -l "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -in "h" fest1.txt > text1.txt && ./grep/s21_grep -n "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -ih "h" fest1.txt > text1.txt && ./grep/s21_grep -h "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -is "h" fest1.txt > text1.txt && ./grep/s21_grep -s "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -ie "h" fest1.txt > text1.txt && ./grep/s21_grep -e "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -io "h" fest1.txt > text1.txt && ./grep/s21_grep -o "h" fest1.txt > text2.txt && diff text1.txt text2.txt
	grep -iv "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -v "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -ic "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -c "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -il "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -l "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -in "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -n "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -ih "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -h "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -ie "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -e "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt
	grep -is "h" fest1.txt fest2.txt > text1.txt && ./grep/s21_grep -s "h" fest1.txt fest2.txt > text2.txt && diff text1.txt text2.txt


build: s21_cat s21_grep

s21_cat: ./cat/s21_cat.c ./cat/s21_cat.h
	$(CC) $(CFLAGS) ./cat/s21_cat.c -o ./cat/s21_cat
	touch text1.txt
	touch text2.txt

s21_grep: ./grep/s21_grep.c ./grep/s21_grep.h
	$(CC) $(CFLAGS) ./grep/s21_grep.c -o ./grep/s21_grep

style:
	@ echo
	@ echo "*** STYLE ***"
	cp ../materials/linters/CPPLINT.cfg .
	python3 ../materials/linters/cpplint.py --extensions=c $(ALL_PATHS)

check:
	@ echo
	@ echo "*** CHECK ***"
	cppcheck --enable=all --suppress=missingIncludeSystem $(ALL_PATHS)


clean:
	rm -rf *test[1,2].txt ./cat/s21_cat ./grep/s21_grep
	
