1) token.c
input:a=b+3
  
2) decno..c
input:7822.56,a,e,6

3) word.c
input:This is our lab

4) fword.c
input:create a .txt file
      This is CC lab
      This is CSE Department
      
5)scanner.c
input:create a .c file
      #include<stdio.h>
      void main()
      {
        int a=20,b=10; if(a>b)
        printf("%d is greater",a);
        else
        printf("b is greater");
      }

6)immleftrec.c
input:T->T*F|F

7)leftfact.c
input:S->abA|abB|cd
      S->aA|aB
      S->aA|aB|c
      
8)a.tdparser.c(E-->E+T|T)
input:i*i+i$
      i$
      i+i$
      
8)b.tdparser2.c(E-->x+T)
input:x+(x+x)$
      (x)$
      x+x$

9)lr0.c
input:3
      S->BC
      B->a 
      C->b
      
10)yacc.c
input:2*(3+7)
      15/(5-2)
  
11)ICGyacc.c
input:a=b/c+d*e-f*g

12)codegen.c
input:a=b+c-d
      2
      1
     
13)targetcode.c
input:abc/+
      abcd+/'*
      
14)optimize.c
input:for(i=0;i<3;i++)
      {
        i=i+1; 
        c=a+b;
      }
