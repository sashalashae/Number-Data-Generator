/**
* @file <HW5-SashaMorgan>
* <This program allows users to input data into the system which returns the output of the factorial, permutation, and combination.
* @author <Sasha Morgan, sasha97>
* @date   <September 13, 2015>
*
* Virginia Tech Honor Code Pledge
* On my honor:
*
* - I have not discussed the C++ language code in my program with
* anyone other than my instructor or the teaching assistants
* assigned to this course.
* - I have not used C++ language code obtained from another student,
* or any other unauthorized source, either modified or unmodified.
* - If any C++ language code or documentation used in my program
* was obtained from another source, such as a text book of coarse
* notes, that has been clearly noted with a proper citation in
* the comments of my program.
* - I have not designed this program in such a way as to defeat or
* interfere with the normal operation of the Web-Cat Server.
*
* <Sasha Morgan>
*/

#include<iostream>
using namespace std;

int factorial(int);//factorial function prototype
int permutations(int, int);//permutations function prototype
int combinations(int , int );
void perms_and_combs(int,int, int&, int&);

int main(){
	int n, k, p, c;
	
	//retrieves the value for n
	cout << "Enter a number: ";
	cin >> n;

	//retrieves the value for k
	cout << "Enter another number: ";
	cin >> k;
	cout << endl;

	//displays the numbers factorial
	cout << "The Factorial is " << factorial(n) << endl;
	
	perms_and_combs(n,k,p,c);

	return 0; //return statement

}//end of main

int factorial(int n){

	//declaration of the integer fact
	int fact = 1;
	
	//for loop that calculates the factorial
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;//factorial calculation
	}

	return fact;//returns the fact value

}//end of factorial function
	
int permutations(int n, int k){
	int perm;//declaration of int perm

	//checks to make sure that the value are equal
	if (n == k){
		perm = 1;
	}

	//checks to make sure that k is not greater than n
	if (k > n){
		perm = 0;
	}
	 //calcualtes the permutation 
	else{
		perm = factorial(n) / factorial(n-k);
	}

	return perm;//returns the correct perumtation value

}

int combinations(int n, int k){
	int comb; //local variable
	
	//checks to see if the two values are equal
	if (k == n){
		comb = 1;
	}

	//checks to see if k is greater than n
	if (k > n){
		comb = 0;
	}

	//calculates the total number of combinations
	else{
		comb = permutations(n, k) / factorial(k);
	}

	return comb; //return statement
}

void perms_and_combs(int n, int k, int& p, int& c){
	
	p = permutations(n,k); //setting the reference value
	c = combinations(n,k); //setting the reference value

	//displays the permutations
	cout << "The permutations are: " << p << endl;

	//displays the combinations 
	cout << "The combinations are: " << c << endl;
	
}