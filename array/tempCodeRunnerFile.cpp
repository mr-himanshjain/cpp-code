#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int uniqnumber(vector<int> arr,int n){
    vector<int> cou;
    int k = 0;
    int ar1[k];
    for(int i = 0; i< n; i++)
    {
        int count = 1;
        for(int j = i+1; j < n; j++)