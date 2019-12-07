#include<stdio.h>
#include<math.h>

 
main(){
   //1
  /*
 int a,x,y;
 printf("Alan icin : 1 Cevre icin : 2 ");scanf("%d",&a);
 printf("Kenarlari girin ");scanf("%d %d",&x,&y);
  switch(a){
  	
  	case 1 : printf("%d",x*y);break;
    case 2 : printf("%d",2*(x+y));break;
  	
  	default:printf("bilinmeyen iþlem");break;
  	
  	
  }
 */
 //2
 /*
 int a,b,c,d,kok1,kok2;
 
 printf("x*x nin kat sayisi:");scanf("%d",&a);
 printf("x in kat sayisi :");scanf("%d",&b);
 printf("sabit sayiyi  giriniz");scanf("%d",&c);
      d=b*b-4*a*c;
     if((d)<0)
       printf("reel kök yok");
     else {
        kok1 = (-b + sqrt(d))/(2*a);
        kok2 = (-b - sqrt(d))/(2*a);
        printf(" kok1: %d\nkok2%d: ",kok1,kok2);
     }
 */
 //3
 /*
 for(int i=1;i<11;i++){
 	
 	
 	
 	printf("%d- Hello world\n ",i);
 }
 */
//4
   /*
      int sum=0;
       for(int i=1;i<50;i++){
 	
 	     sum=sum+i;
 	
        
       } 
       printf("%d",sum);
   */
  //5
  /*
  int n=4 ;
  int sum=1;
  for(int i=1;i<=n;i++){
 	
 	
 	sum*=2;
 	
 	
 }
 printf("%d",sum);
*/
//6
//alýntý ekok
/*
int i, num1, num2, max, lcm=1;

   
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

 
    max = (num1 > num2) ? num1 : num2;

   
    i = max;
    

    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            
            lcm = i;

          
            break;
        }

        
        i += max;
    }
*/
//7
/*
int num,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
*/
//8
/*
 int i, j, end, isPrime, sum=0;

    
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &end);

 
    for(i=2; i<=end; i++)
    {

     
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
            
                isPrime = 0;
                break;
            }
        }

        
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", end, sum);
	*/
	//9
	/*
	int num,r,sum=0,temp;
     printf("Enter a number: ");
     scanf("%d",&num);
     temp=num;
    while(num!=0){
     r=num%10;
     num=num/10;
     sum=sum+(r*r*r);
    }
        if(sum==temp)
         printf("%d is an Armstrong number",temp);
        else
         printf("%d is not an Armstrong number",temp);
	*/
	//10
	/*
	int digit;  
    int sum=0;  
    int number; 

    printf("The armstrong numbers are-");

    for(number = 1; number <= 10000; number++)
    { 
        int temporary = number; 
        sum = 0;                

        while(temporary > 0) 
        {
            digit = temporary % 10; 
            sum = sum + (digit * digit * digit); 
            temporary = temporary / 10;
        }

        if(sum == number)        
            printf("%d ",number); 
            */
    //11  
	/*      
    int number, sum=0, i=1;
 
     printf("Please enter a number to check perfect number\n");
 
     scanf("%d",&number);
 
 
 
     while(i<number)
 
     {
 
           if(number%i==0)
 
           {
 
               sum=sum+i;
 
           }
 
           i++;
 
     }
 
      if(sum==number)
 
           printf("\nEntered number %d is a perfect number",i);
 
     else
 
          printf("\nEntered number %d is not a perfect number",i);
          */
    //12
    /*
    int num,i,sum,j;
    printf("Enter a number to know all perfect numbers till n\n");
    scanf("%d",&num);
    printf("The perfect numbers between 1 and %d are:",num);
    for(i=1;i<=num;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
        sum+=j;
      }
    }
    if(sum==i)
    {
      printf("%d\n",i);
    }
  }
	*/
	//13
	/*
	int num, digit, sum=0, i, fact=1;
    printf("Enter a number \n");
    scanf("%d",&num);
 
    int temp = num; //Copying original number
 
    while(temp>0){
        digit = temp%10;
 
        //Calculating factorial of digit
        fact=1;
        for(i=1; i<=digit; i++){
            fact = fact*i;
        }
 
        //Adding Factorial
        sum += fact;
 
        temp = temp/10;
    }
 
    if(sum == num)
        printf("Strong Number \n");
    else
        printf("Not a Strong Number \n");
	  */
	 //14
	 //15  
	 /*
	 int n, r = 0, t;

  printf("Enter a number to check if it's a palindrome or not\n");
  scanf("%d", &n);

  t = n;

  while (t != 0)
  {
    r = r * 10;
    r = r + t%10;
    t = t/10;
  }

  if (n == r)
    printf("%d is a palindrome number.\n", n);
  else
    printf("%d isn't a palindrome number.\n", n);
    */
    //16
    /*
    float x,sum,t,d;
	int i,n;
	printf("Input the Value of x :");
	scanf("%f",&x);
	printf("Input the number of terms : ");
	scanf("%d",&n);
	sum =1; t = 1;
	for (i=1;i<n;i++)
	{
	  d = (2*i)*(2*i-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
         */
	//17
	/*
	int i,n;
   float s=0.0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\n\n");
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
     printf("1/%d + ",i);
     s+=1/(float)i;
       }
     if(i==n)
     {
     printf("1/%d ",i);
     s+=1/(float)i;
     }
     }
        printf("\nSum of Series upto %d terms : %f \n",n,s);
	*/
    //18
    /*
    int i, j, satir;
    printf("Satir sayisini giriniz : ");
    scanf("%d", &rows);
    for (i = 1; i <= satir; ++i) {
        for (j = 1; j <= i; ++j) {
            printf(" * ");
        }
        printf("\n");
    }
	*/
	//19
	/*
	float x,sum,no_row;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	printf("\nThe sum  is : %f\n",sum);	  
     */
	 //20
	 /*
	 
	 double sum(int x, int n) 
{ 
    double i, total = 1.0; 
    for (i = 1; i <= n; i++) 
        total = total +  
                (pow(x, i) / i); 
    return total; 
} 
  

int main() 
{ 
    int x = 2; 
    int n = 5; 
    printf("%.2f", sum(x, n));      
	}
	*/
	//21
	/*
	int sumseries(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of the series is %d",sumseries(n));
}
int sumseries(int n)
{
    int i,sum=0;
    if(n==1)
        return 1;
    for(i=0;i<n;i++)
    {
    sum=sum*10+1;
    }
    */
    //22
    /*
    int i, sum=0;
   printf("Numbers between 100 and 200, divisible by 9 : \n");
   for(i=101;i<200;i++)
   {
     if(i%9==0)
     {
       printf("% 5d",i);
       sum+=i;
     }
   }
   printf("\n\nThe sum : %d \n",sum);
   */
   //23
   /*
   int n, i, j, binno=0,dn;

     printf("\n\nConvert Decimal to Binary:\n ");
     printf("-------------------------\n");

     printf("Enter a number to convert : ");
     scanf("%d",&n);

     dn=n;
     i=1;

      for(j=n;j>0;j=j/2)
       {
        binno=binno+(n%2)*i;
        i=i*10;
        n=n/2;
       }
     
     printf("\nThe Binary of %d is %d.\n\n",dn,binno);
     */
     //24
     //25
	 /*
	 int i, space, rows, k = 0, count = 0, count1 = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i) {
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
            ++count;
        }
        while (k != 2 * i - 1) {
            if (count <= rows - 1) {
                printf("%d ", i + k);
                ++count;
            } else {
                ++count1;
                printf("%d ", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
        */
}
