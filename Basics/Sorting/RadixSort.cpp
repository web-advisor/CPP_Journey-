/* Radix sort / Bucket sort / Digital sort
  - it is a non comparitive sorting algorithm
  - it avoids comparison by creating and distributing elements into buckets according to their radix
  - for elements with more than one significant digit the , this bucketing process repeats for jeach digit , while preserving the order of prior steps 
    untill all digits have been considered 
  - typically radix sort uses the counting sort on each digit as a sub part of its algorithm (starting from right to left/starting from least significant bt to the most significat bit)
  (and not only counting sort is used becoz it works on a range the larger the range of elements in input array the bigger will be the count array is
  as we have to map element with index of count array, also many elements count in count array will be zero thus huge amount of space will be wasted
  thus using counting sort on no.s which have more than one digit is impractical and inefficient.
  - radix sort has linear time complexity which is better than O(nlog(n)) of comparitive sorting algorithms. 
 -- Time Complexity : O d(n+k) //linear TC becoz it technically implements count sort only 
    n-> no. of elements in array , k->range of elements
    d-> no. of digits that the maximum element in the input array has (same as the no. of times counting sort is called)

 -- Space Complexity : O(n+k) // As the extra array of size k is created to store the count and n size output array is also created 

 example array arr[8] :
              0   1   2   3   4    5   6  7
            [170][45][75][90][802][24][2][66]     Max element -> 802 that has 3 digits 
 ==> arr[8] :
              0   1   2   3   4    5   6  7
            [170][045][075][090][802][024][002][066] // Added zeros to have three digits in all element just for calculation purpose (same no. of digits as that of max no. in array has)

Radix sort Algorithm working ----
1. take input array and find the maximum no. in the array  (in our eg. arr max = 802 and it has 3 digits)
 (becoz radix sort implements count sort p times (no of passes are p), where p is the no. of digits in max element of array)
2.  [actually counting sort steps in code, these buckets/queues are just for understanding and thinking process, we are sorting our array by only considering the single digits in each pass]
define 10 queues (first in first out) each representing a bucket for each digit from 0-9 as (as we apply count sort to individual digits we have 0-9 as only digits)
 Q0 represents no. 0 ,Q1 represents no. 1 and so on 
3. consider the least significant digit of each number in the list which is to be sorted (i.e from units place)/(right to left) [for pass-1]
4. insert each no. into their respective queue based on the least significant digit
5. now we will put these elements in array arr starting from Q0 to Q9 in sequence in fifo order 
6. repeat step 3,4,5 on next least significant digit (tens place digit)[pass-2] ,Now the sorting for tens place digit will happen on this modified array  
7. repeat these steps untill sorting happens for all digits based on the most sig digit

 eg. pass-1 
 
 170<-least significant digit                                          
      0   1   2   3   4    5   6  7
     [170][045][075][090][802][024][002][066]   going in array from left to right
 170 first in                         045 goes in first                     <----
         Q0    Q1    Q2    Q3    Q4    Q5    Q6    Q7    Q8    Q9               |
       [090]   []   [002]  []   [024] [075]  [066] []    []    []               | all these things are done using count sort 
       [170]        [802]             [045]                                 <----

       arr[8]   [170][090][802][002][024][045][075][066]

 
  Now the sorting for tens place digit (pass-2) will happen on this modified array  
  pass-2
 170       arr[8]   [170][090][802][002][024][045][075][066]              
  |
tens place digit (next sig digit)                                            <----
         Q0    Q1    Q2    Q3    Q4    Q5    Q6    Q7    Q8    Q9                |
       [002]   []   [024]  []   [045] []   [066]  [075]  []  [090]               | all these things are done using count sort 
       [802]                                     [170]                       <----

  arr[8]    [802][002][024][045][066][170][075][090]

  
  
  Now the sorting for hundreds place digit (pass-3) will happen on this modified array
pass-3 
 170      arr[8]    [802][002][024][045][066][170][075][090]
 | 
hundreds place digit (next sig digit)                                        <----
         Q0    Q1    Q2    Q3    Q4    Q5    Q6    Q7    Q8    Q9                |
       [090]  [170]  []    []    []    []    []    []   [802]  []                | all these things are done using count sort 
       [075]                                                                 <----
       [006]                                    
       [045]
       [024]
       [002]

         arr[8]    [002][024][045][066][075][090][170][802]
               SORTED ARRAY  

 Radix sort Algorithm  
 GetMax(arr,size)
 {
   m=arr[0];
   for(int i=0;i<size;i++)
   {
    if(arr[i]>m)
    {
      M = arr[i];
    } 
   }
  return m;
 }
 RadixSort(arr,size)
 {
   Get the max from arr 
   max = GetMax(arr,size); // 802 in our example 

   Do counting sort for every digit.
  // if we have p digits in max array element , counting sort will be called p times that mechanism is done by this for loop

   for(int div=1;max/div>0;div=div*10) // becoz we will sent div also in count sort function as div will decide 
                                        that we will apply count sort on unit place digit of elements (div=1) or tens place digit of elements(div=10) etc..
   {  //max/div>0 is the stop condn for this loop as counting sort will be excecuted for each digit of each element
      CountSort(arr,size,div); // This div 
   }

 }
 in our example for loop will run for div=1,10,100 (pass-1,pass-2,pass-3)
 802/1==>802>0 (div=1)
 802/10==>80>0 (div=10)
 802/100==>8>0 (div=100)
 
 max=802 
 for(int div=1;802/div>0;div=div*10) 
 {
  CountSort(arr,8,1); // sim CountSort(arr,8,10)  and CountSort(arr,8,100)
 }

 we will see case for units place digit in our example  (div=1) CountSort(arr,8,1) 
 (only some diff in the count sort function as we are going to apply count sort on individual digits of elements)

  CountSort(arr,size,div)
  {
    create output array
    output[size];
     range=10;
    // The range will be 10 (as we have only digits bw 0-9 in decimal no. system as counting sort will be applied on individual digits of elements)
    int count[range];
    for(int i=0;i<range;i++)
    {
     count[i] = 0;
    }
    // in unit place digit case we will map unit place digit of each element with the index of count array 
       and increment the count in count array this will be done with the help of arithmetic calculation A
       (just similar to placing elements in buckets acc to their unit place digit)

     for(int i=o;i<size;i++) // 0-7
     {
      count[(arr[i]/div)%10]++; // A , (arr[i]/div)%10 index of count array will exactly match the units place digit of each element 
     }  
     for(int i=1;i<range;i++)
     {
      count[i]=count[i]+count[i-1]; // same as that in count sort algorithm // to calculate positions of elements in sorted array considering 
                                                                               the units place digits of elements 
     }
     for(int i=size-1;i>=0;i--) // for placing elements from buckets into output array(final sorted array for particular place digit) starting from 
                                   left to right and in fifo order 
     { // HERE WE ARE GOING IN REVERSE ORDER FROM i=size-1 TO i=0
      output[count[(arr[i]/div)%10]-1] = arr[i];  
      count[(arr[i]/div)%10]--;
      // or directly use  output[--count[(arr[i]/div)%10]] = arr[i]; 
     }
     for(int i=0;i<size;i++) // copying final (output) array to actual array arr
     {
       arr[i] = output[i];
     }
     
  } 

  The exact process: 
  for each digit of elements apply count sort [the digit on which it is to be applied is handled by div variable] 
  then map that place digit of each element with the index of count array and increase the count there, then add previous valules to current
  values in the count array , we have positions of elements in sorted array(for that particular place digit)  then we will place them in output array
  at suitable index (THIS LAST STEP IS EXPLAINED FURTHER IN EXAMPLE)

  example in our case : 
  output[8];
  range=10;
  count[10];
  for(int i=0;i<10;i++)
  {
    count[i] = 0;
  }
  for(int i=0;i<8;i++)
  {
    count[(arr[i]/div)%10]++;
  }              
                     0    1    2    3    4    5    6    7
          arr[8]   [170][045][075][090][802][024][002][066]

          count[10]  [0][0][0][0][0][0][0][0][0][0]

  // for i=0 
     (arr[0]/1)%10 (so that we can get units place digit we divided array element by div(1) and then taken modulus with 10)
     (170/1)%10
     0 thus we can see by this arithmetic calculation we get units place digit of this element 
     now 
   count[(arr[0]/1)%10]++ 
   count[0]++ we incremented the count in count array at 0 index 

  // for i=1
     (arr[1]/1)%10 
     (045/1)%10 
     5 we get unit place digit for this element
     now
     count[5]++ thus we can see how last digit of each element is mapped with index of count array and their count is incremented there 

    similarily
  // for i=2
     count[5]++   but we have to remember that 045 goes in queue 5 firstly then 075 goes in
    [analogous to that the count of 045 is incremented firstly at index 5 then the count of 075 is increments at 5 index
     this is to remember that they will be placed in output array (from queues using their counts) in fifo order]
  // for i=3
     count[0]++
    
  // for i=4
     count[2]++

  // for i=5
     count[4]++

  // for i=6
     count[2]++ 

  // for i=7
     count[6]++

     Thus now count array becomes :
      count[10] :  0  1  2  3  4  5  6  7  8  9
                  [2][0][2][0][1][2][1][0][0][0]             
       The count remains 0 where elements in arr does not have units place digit as 8,9,1,3,7

  Now the loop  

         for(int i=1;i<10;i++)
         {
           count[i]=count[i]+count[i-1];
         }

         after this loop we get count array as  (cummulative count array)
         count[10] :  0  1  2  3  4  5  6  7  8  9
                    [2][2][4][4][5][7][8][8][8][8] 
                    we get exact positions of elements[considering only units place digit] in output array 

     NOW THE MAPPING OF ELEMENTS HAS TO BE DONE FROM arr[INPUT ARRAY] TO OUTPUT ARRAY i.e WE HAVE TO PICK AN ELEMENT FROM INPUT ARRAY AND PLACE IT IN THE 
     OUTPUT ARRAY AT SUITABLE INDEX . [AND THAT SUITABLE INDEX WILL COME FROM POSITIONS PRESENT IN CUMMULATIVE COUNT ARRAY]

//loop a for(int i=7;i>=0;i--)       // for placing elements from buckets into output array(final sorted array for particular place digit) starting from 
                                   left to right and in fifo order 
        {                         // HERE WE ARE GOING IN REVERSE ORDER FROM i=size-1 TO i=0 
          output[--count[(arr[i]/div)%10]] = arr[i]; 
        }
  
     (arr[i]/div)%10]-1 GIVES THE INDEX WHERE ELEMENT IS TO BE PLACED IN OUTPUT ARRAY
 
       HERE WE ARE GOING IN REVERSE ORDER BECOZ WE WANT TO PLACE THE ELEMENTS IN PROPER ORDER IN OUTPUT ARRAY 
       FOR EG. IF 170 HAS COME BEFORE 090 AND BOTH OF THEM HAS 0 AS UNITS PLPACE DIGIT THEN IN OUTPUT ARRAY 170 SHOULD COME BEFORE 090 
       (SEE PROOF FROM BUCKETS FOR UNDERSTANDING)
       jin elements ki last digit same h usme se jo arr mee phle aya vo output array mee bhi phle hi ayega 
                                A    B
                           0    1    2    3    4    5    6    7
               arr[8]    [170][045][075][090][802][024][002][066]

               count[10] :  0  1  2  3  4  5  6  7  8  9
                           [2][2][4][4][5][7][8][8][8][8] 

   // for i=7
      arr[7] = 066
      (066/1)%10 = 6
      count[6] = 8
      --count[6] ==> 7 is the index where it is placed in output array 
      thus output[7] = 066
            count[10] :  0  1  2  3  4  5  6  7  8  9
                        [2][2][4][4][5][7][7][8][8][8]  

   // for i=6       // case for units place digit as 2
   --count[2] ==> 3 
     output[3] = 002
             count[10] :  0  1  2  3  4  5  6  7  8  9
                         [2][2][3][4][5][7][7][8][8][8]
   
    // for i=5
    --count[4] ==> 4
      output[4] = 024
             count[10] :  0  1  2  3  4  5  6  7  8  9
                         [2][2][3][4][4][7][7][8][8][8]

    // for i=4      // case for units place digit as 2 
      --count[2] ==> 2
        output[2] = 802 thus we can see that by running our loop in reverse order the elements with same units place digit are placed in output array
                    in same sequence as we want that is which one comes in array arr first it will also come in output array firstly(in fifo order) 
             count[10] :  0  1  2  3  4  5  6  7  8  9
                         [2][2][2][4][4][7][7][8][8][8]
    
    // fot i=3    // case for units place digit 0                 
      --count[0] ==> 1
       output[1] = 090                      
             count[10] :  0  1  2  3  4  5  6  7  8  9
                         [1][2][2][4][4][7][7][8][8][8]

    // for i=2  // case for units place digit as 5
       --count[5] ==> 6
         output[6] = 075
             count[10] :  0  1  2  3  4  5  6  7  8  9
                         [1][2][2][4][4][6][7][8][8][8]     

    // for i=1  // case for units place digit as 5
       --count[5] ==> 5
         output[5] = 045 // thus we can see 045 and 075 have same units place digit i.e 5 and in arr 045 comes before 075 
                            also in output array 045 comes before 175 [similatr to getting out of bucket in fifo order]
             count[10] :  0  1  2  3  4  5  6  7  8  9
                         [1][2][2][4][4][5][7][8][8][8]    

    //  for i=0 // case for units place digit as 0
        --count[0] ==> 0
          output[0] = 170    //  thus we can see 170 and 090 have same units place digit i.e 5 and in arr 170 comes before 090
                            also in output array 170 comes before 090 [similatr to getting out of bucket in fifo order]                                                             
   output array :                         A    B
    output[8] :  0    1    2    3    4    5    6    7  
               [170][090][802][002][024][045][075][066]

 Thus remember that out of A and B same units place digits elements(A comes before B in arr) we want to place A before B in output array also thus we 
 are going to use loop in reverse order(loop a) only in count sort algo inside radix sort  (sim for all place digits)

   thus sorted array for units place digit :
    arr[8] :     0    1    2    3    4    5    6    7  
               [170][090][802][002][024][045][075][066]

 
  NOW THE SAME PROCEDURE WILL BE APPLIED TO THIS MODIFID arr FOR TENS PLACE DIGIT 
  REPEAT THE ALGO FOR div=10  (PASS-2)
  eg. 802 and 002 tens place digit is mapped with index of count array then count is incremented at 0 index [the formula (arr[i]/div)%10 will give tens place digit as div=10 in this case]
      then cummulative count array is calculated and Reverse loop will run(started placing elements from end of arr)
      to place the elements in output array from arr
      (802 will come before 002 in output array age vale ko ham aage rkhenge)
  WE GET arr[8] AS :
                          arr[8]    [802][002][024][045][066][170][075][090]
                                 
 
  NOW THE SAME PROCEDURE WILL BE APPLIED TO THIS MODIFID arr FOR HUNDREDS PLACE DIGIT
  REPEAT THIS ALGO FOR div=100 (PASS-3)
  WE GET arr[8] AS :
                        
         arr[8]    [002][024][045][066][075][090][170][802]
               SORTED ARRAY  

               WE GET OUR FINAL SORTED ARRAY IN ASCENDING ORDER

  WE CAN SEE AS THE MAX NO. IN INPUT ARRAY HAS 3 DIGITS THE RADIX SORT HAS CALLED COUNT SORT 3 TIMES .........

   CODE FOR RADIX SORT 
   */
#include <bits/stdc++.h>
using namespace std;
void CountSort(int arr[], int size, int div)
{
  int output[size];
  int range = 10;
  int count[range];
  for (int i = 0; i < range; i++)
  {
    count[i] = 0;
  }
  for (int i = 0; i < size; i++)
  {
    count[(arr[i] / div) % 10]++;
  }
  for (int i = 1; i < range; i++)
  {
    count[i] = count[i] + count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--)
  {
    output[--count[(arr[i] / div) % 10]] = arr[i];
    // count[(arr[i] / div) % 10]--;
  }
  for (int i = 0; i < size; i++)
  {
    arr[i] = output[i];
  }
}

int GetMax(int arr[], int size)
{
  int m = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > m)
    {
      m = arr[i];
    }
  }
  return m;
}

void RadixSort(int arr[], int n)
{
  int max = GetMax(arr, n);
  for (int div = 1; max / div > 0; div *= 10)
  {
    CountSort(arr, n, div);
  }
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int N;  
  // cout << " ENTER SIZE OF ARRAY : ";
  cin >> N;
  int *ARR = new int(N);
  // int ARR[N];
  // cout << " ENTER ARRAY ELEMENTS :" << endl;
  for (int k = 0; k < N; k++)
  {
    cin >> ARR[k];
  }
  RadixSort(ARR, N);
  // cout << " SORTED ARRAY :" << endl;
  cout << endl;
  cout << " | ";
  for (int k = 0; k < N; k++)
  {
    cout << ARR[k] << " | ";
  }
  return 0;
}
