//Solution for Utopian Tree challenge at hackerrank.com
//contest rules located at: https://www.hackerrank.com/challenges/utopian-tree
//Written by Sam Ryan, 2014
#include <stdio.h>
#include <stdlib.h>

int MonsoonSeasonGrow(int height);
int SummerSeasonGrow(int height);
int CalculateTreeHeight(int cycles);


int main()
{
    int numTestCases;
    int numCycles;
    int i;

    //First line of input is number of test cases
    scanf("%d", &numTestCases);

    //Following lines of input are the number of cycles per test case
    for(i=0;i<numTestCases;i++)
    {
        //Read in number of cycles in each test case
        scanf("%d", &numCycles);
        //Calcualte the height of the tree after given number of cycles and print answer
        printf("%d\n", CalculateTreeHeight(numCycles));
    }
    return 0;
}

int CalculateTreeHeight(int cycles)
{
    int i;
    //Newly planted trees are 1 meter in height
    int TreeHeight = 1;

    for(i=0;i<cycles;i++)
    {
        //Cycles alternate between monsoon and summer. Monsoon season
        //comes first so if i=0 it is monsoon season.
        if((i%2)==0) //Monsoon season
        {
            TreeHeight = MonsoonSeasonGrow(TreeHeight);
        }
        else //Summer season
        {
            TreeHeight = SummerSeasonGrow(TreeHeight);
        }
    }

    return TreeHeight;
}

//Every monsoon season the tree doubles in height
int MonsoonSeasonGrow(int height)
{
    return height * 2;
}

//Every summer the tree groes by 1 meter
int SummerSeasonGrow(int height)
{
    return height + 1;
}
