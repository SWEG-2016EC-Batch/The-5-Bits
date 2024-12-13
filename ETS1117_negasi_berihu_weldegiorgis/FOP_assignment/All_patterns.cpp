#include <iostream>
using namespace std;

int main() {
	{
		/*4) Write a program that generate each of the pattern on the right side.*/
		// a-
		for(int i=1; i<=5; i++) {
			for(int j=1; j<=5; j++) {
				cout<<j <<" ";

			}
			cout<<endl;
		}
	}
	cout<<"______________________________________________\n "<<endl;
	{
		// b-
		char alpha='A';
		for(int i=1; i<=4; i++) {
			for(int j=1; j<=6; j++) {
				cout<<alpha<<" ";
				alpha++;
				if(alpha > 'X')break;

			}
			cout<<endl;
		}
	}
	cout<<" ______________________________________________\n "<<endl;

//c
	{
		for(int i=1; i<=5; i++) {
			for(int j=1; j<=i; j++) {
				cout<<j<<" ";
			}
			cout<<endl;
		}

	}
	cout<<"______________________________________________\n "<<endl;

//4-b_1
	{
		for(int i=1; i<=5; i++) {
			for(int j=i; j<5; j++) {
				cout<<"  ";
			}
			for(int j=i; j>=1; j--) {
				cout<<" "<<j;
			}
			cout<<endl;
		}
	}
	cout<<"______________________________________________\n "<<endl;

//b_2
	{
		for(char i='A'; i<='E'; i++) {
			for(char j='A'; j<=i; j++) {

				cout<<j<<" ";

			}
			cout<<endl;

		}

	}
	cout<<"______________________________________________\n "<<endl;

//b_3
	{
		for(char i='a'; i<='e'; i++) {
			for(char j='a'; j<='e'; j++) {

				cout<<j<<" ";

			}
			cout<<endl;

		}

	}
	cout<<"______________________________________________\n "<<endl;
//5 hallow square
	{
		for(int i=1; i<=7; i++) {
			for(int j=1; j<=8; j++) {

				if(i==1 || i==7 || j==1 || j==8)cout<<"* ";

				else cout<<"  ";

			}
			cout<<endl;
		}
	}
	cout<<"______________________________________________\n "<<endl;

	//inverted half pyramid
	{
		for(int i=1; i<=6; i++) {
			for(int j=i; j<=6; j++) {

				cout<<"*";


			}
			cout<<endl;
		}

	}

//hallow inverted half pyramid
	cout<<"______________________________________________\n "<<endl;

	{
		for(int i=1; i<=6; i++) {
			for(int j=i; j<=6; j++) {

				if(i==1||i==j  ||  j==1 || j==6)

					cout<<"*";

				else cout<<" ";
			}
			cout<<endl;
		}
	}
	//full pyramid
	cout<<"______________________________________________\n "<<endl;

	for(int i=1; i<=6; i++) {
		for(int j=i; j<=6; j++) {

			cout<<" ";
		}
		for(int j=1; j<=i; j++) {

			cout<<"* ";
		}
		cout<<endl;
	}

//inverted full pyramid
	cout<<"______________________________________________\n "<<endl;

	for(int i=1; i<=6; i++) {
		for(int j=1; j<=i; j++) {

			cout<<" ";
		}
		for(int j=i; j<=6; j++) {

			cout<<"* ";


		}
		cout<<endl;
	}
	cout<<"______________________________________________\n "<<endl;


// hallow full pyramid

	{
		for(int i=1; i<=6; i++) {

			for(int j=i; j<=6; j++) {

				cout<<" ";
			}

			for(int j=1; j<=i; j++) {

				if(i==1|| i==6 || j==1||j==i) {
					cout<<"* ";
				}

				else cout<<"  ";

			}
			cout<<endl;
		}
	}
	return 0;
}
