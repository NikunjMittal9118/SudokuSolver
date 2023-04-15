#include<bits/stdc++.h>
using namespace std;
bool checkSudoku(vector<vector<char>>& pt,int r,int c,char k){
    for(int i=0;i<9;i++){
        if(pt[i][c]==k and i!=r){
            return false;
        }
    }
    for(int i=0;i<9;i++){
        if(pt[r][i]==k and i!=c){
            return false;
        }
    }
    int x=(r/3)*3;
    int y=(c/3)*3;
    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
            if(pt[i][j]==k and i!=r and j!=c){
                return false;
            }
        }
    }
    return true;
}
bool SudokuSolver(vector<vector<char>>& pt){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(pt[i][j]=='.'){
                for(char k='1';k<='9';k++){
                    if(checkSudoku(pt,i,j,k)){
                        pt[i][j]=k;
                        bool flag=SudokuSolver(pt);
                        if(flag==true){
                            return true;
                        }
                        else{
                            pt[i][j]='.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<char>>& pt){
    Solve(pt);
}
int main(){
   vector<vector<char>> pt();
   for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        char k; cin>>k;
        pt[i].push_back(k);
    }
   }
   solve(pt);
}























// bool inRow(vector<vector<char>>& pt,char k,int r){
    //     for(int j=0;j<9;j++){
    //         if(pt[r][j]=='k'){
    //             return true;
    //         }
    //     }
    //     cout<<"d"<<endl;
    //     return false;
    // }
    // bool inColumn(vector<vector<char>>& pt,char k,int c){
    //     for(int i=0;i<9;i++){
    //         if(pt[i][c]=='k'){
    //             return true;
    //         }
    //     }
    //     cout<<"d"<<endl;
    //     return false;
    // }
    // bool inGrid(vector<vector<char>>& pt,char k,int r,int c){
    //     int x=(r/3)*3;
    //     int y=(y/3)*3;
    //     for(int i=x;i<x+3;i++){
    //         for(int j=y;j<y+3;j++){
    //             if(pt[i][j]=='k'){
    //                 return true;
    //             }
    //         }
    //     }
    //     cout<<"d"<<endl;
    //     return false;
    // }















