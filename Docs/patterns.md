# Some Unique Pattern Problems 
## Swastika Pattern
    int r,c,i,j,mid=1;
    cin>>r;
    cin>>c;

    if(r==c){
        mid=r/2;
        for(i=0;i<r;i++){
            if(i==mid){
                for(j=0;j<c;j++){
                    cout<<"*";
                    cout<<" ";
                }
                cout<<endl;
            }else{
                for(j=0;j<c;j++){
                    if(j==mid){
                        cout<<"*";
                    }else if(i==0 && j>mid){
                        cout<<"*";
                    }else if(i==(r-1) && j<mid){
                        cout<<"*";
                    }else if(i<mid && j==0){
                        cout<<"*";
                    }else if(i>mid && j==(c-1)){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                    cout<<" ";
                }
                cout<<endl;
            }
        }
    }
    Ouput ::
    *     * * * *
    *     *
    *     *
    * * * * * * *
          *     *
          *     *
    * * * *     *

## Diamond Pattern
    int n;
    cin >> n;
    cout << "Diamond : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << " *  ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << " *  ";
        }
        cout << endl;
    }
    Output : 
    Diamond : 
            *  
          *   *  
        *   *   *  
      *   *   *   *  
    *   *   *   *   *  
      *   *   *   *  
        *   *   *  
          *   *  
            *  

## Numeric Full Pyramid
    int n, m = 1;
    cin >> n;
    cout << "Full Pyramid : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
            cout << m;
            if (j >= i && j!=2*i)
            {   
                m--;
            }
            else
            {
                m++;
            }
            cout << " ";
        }
        cout << endl;
    }
    Output ::  
                   1  
                2  3  2 
             3  4  5  4  3 
          4  5  6  7  6  5  4 
       5  6  7  8  9  8  7  6  5 
    
## Pascal's Triangle :
    int n,coef;
    cin>>n;
    cout<<"Pascal's Triangle :  "<<endl;
    for(int i=1;i<=n;i++){
        coef=1;
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<coef<<" ";
            coef=coef*(i-j)/j;
        }
        cout<<endl;
    }
    Output : 
    Pascal's Triangle :  
        1 
       1 1 
      1 2 1 
     1 3 3 1 
    1 4 6 4 1 

## Hollow Diamond Pattern :
    int n;
    cin >> n;
    cout << "Hollow Diamond Pattern :  " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if(i+j<=n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
            if(i+n<=j){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if(i>=j){
                cout<<"*";
            }else{
                cout<<" ";
            }
            if(i>=(2*n-1)-j){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    Output : 
    Hollow Diamond Pattern :  
    * * * * *  * * * * *
    * * * *      * * * *
    * * *          * * *
    * *              * *
    *                  *
    *                  *
    * *              * *
    * * *          * * *
    * * * *      * * * *
    * * * * *  * * * * *

## Diagonal and Borders of a Rhombus : 
    cout << "Diagonal and Borders of a Rhombus :  " << endl;
    int i, j, n;
    cin >> n; // ‘n’ must be odd
    int num1 = n / 2 * 3;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
            if (i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    Output : 
    Diagonal and Borders of a Rhombus :  
        *    
       ***   
      * * *  
     *  *  * 
    *********
     *  *  * 
      * * *  
       ***   
        *    

        

