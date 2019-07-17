#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 1000
struct Stack{
	char v[STACK_SIZE];
	int top;
};

void push(struct Stack* s, char c);
char pop(struct Stack* s);
char tp(struct Stack* s);


int main()
{
    //g entrada, c saida
    int d, i,j;
    j=0;
    char c[1000], g[1000],p=0;
        struct Stack teste = {teste.top = NULL};

     while(scanf("%d", &d) && d){
        for (i = 0; i < d; i++)
            scanf(" %c", &g[i]);
        for (i = 0; i < d; i++)
            scanf(" %c", &c[i]);
            g[d]=c[d]= '\0';
        i = 0;
        j=0;
        while(1){
                p=tp(&teste);
                 if(p!=0 && j < d && p==c[j]){

                       pop(&teste);

                       printf("R");
                       j++;
                 }
                 else if(i < d){
                        push(&teste, g[i]);

                        printf("I");
                        i++;
                 } else break;


        }


        if(teste.top==NULL){
            printf("\n");
        }
        else{

            printf(" Impossible\n");
        }
        while (p!= NULL){
              pop(&teste);
        }
    }

    return 0;
}






void push(struct Stack* s, char c){
	if (s->top < (STACK_SIZE)){
		s->top++;
		s->v[s->top] = c;
	}else{
		exit(1);
	}
}

char pop(struct Stack* s){
	if (s->top >= 0){
		char tmp = s->v[s->top];
		s->top--;
		return tmp;
	}else{

		return NULL;
	}
}

char tp(struct Stack* s){
		char tmp = s->v[s->top];

		return tmp;
	}

