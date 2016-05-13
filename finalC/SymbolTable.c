#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Entry {
	int data;
	char symbol[20];
	int PC;
}STable[100];
int max=0;
int searchSTable(char w[]) {
	int ans=-1, i;
	for(i=0;i<100;i++) {
		if(strcmp(STable[i].symbol, w)==0) {
			ans=i;
		}
	}
	return ans;
}
void addEntry(char word[]) {
	int i;
	for(i=0;i<strlen(word);i++)
	STable[max].symbol[i]=word[i];
	max++;
}
void setData(char w[], int d) {
	int i=searchSTable(w);
	STable[i].data=d;
}
void setPC(char w[], int p) {
	int i=searchSTable(w);
	STable[i].PC=p;
}
int getData(char w[]) {
	int i=searchSTable(w);
	return STable[i].data;
}
int getPC(char w[]) {
	int i=searchSTable(w);
	return STable[i].PC;
}
int scanTable(char w[]) {
	if(searchSTable(w)==-1) {
		addEntry(w);
	}
}
