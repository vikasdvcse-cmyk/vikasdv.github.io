//MATRIX adddition
#include<iostream>

int main(){
    int i,j;
    std::cout<<"Enter number of rows and coloumns of matrix 1 and 2 :\n";
    std::cin>>i>>j;
    int mone[i][j],mtwo[i][j],msum[i][j];
    std::cout<<"Enter the 1st matrix:\n";
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            std::cin>>mone[a][b];
        }
    }
    std::cout<<"Enter the 2nd matrix:\n";
    for(int c=0;c<i;c++){
        for(int d=0;d<j;d++){
            std::cin>>mtwo[c][d];
        }
    }
    std::cout<<"SUM OF THE MATRIX IS:\n";
    for(int e=0;e<i;e++){
        for(int f=0;f<j;f++){
            msum[e][f]=mone[e][f]+mtwo[e][f];
    std::cout<<"["<<e+1<<"]"<<"["<<f+1<<"] = "<<msum[e][f]<<std::endl;
        }
    }
return 0; 
}
