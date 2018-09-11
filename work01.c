#include <stdio.h>

int problem1(){
	int sum =0;
	for (int i=1; i<=1000;i++){
		if (i%3==0 || i%5==0){
			sum+=i;
		}
	}
	return sum;
}

int problem5(){
	int ans =20;
	while (ans %3 != 0 || ans %4 != 0 || ans %7 != 0 || ans%8 != 0|| ans%9 != 0 || ans%11 != 0 || ans%13 != 0 || ans%16 != 0 || ans%17 != 0 || ans%19 != 0){
		ans += 20;
	} 
	return ans;
}

int problem6(){
	int sum_of_squares = 0;
	for (int i=1; i<=100; i++){
		sum_of_squares+=(i*i);
	}
	int square_of_sum=0;
	for(int i=1; i<=100; i++){
		square_of_sum+=i;
	}
	square_of_sum*= square_of_sum;
	return square_of_sum - sum_of_squares;
}

int main(){
	printf("Problem 1 %d \n", problem1());
	printf("Problem 5 %d \n", problem5());
	printf("Problem 6 %d \n", problem6());
}
