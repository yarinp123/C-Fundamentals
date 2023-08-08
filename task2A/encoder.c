#include <stdio.h>
#include <string.h>


char upper(char lower){
    char c= lower;
    if(lower >= 'a' && lower <= 'z') 
    {
        c = lower - 32;
    }
    return c;
}


int isLower(char lower){
    char c= lower;
    if(lower >= 'a' && lower <= 'z') 
        return 1;
    return 0;
}



void decToHex(char hex){
    int quotient, remainder;
    int i, j = 0;
    char hexArr[2];
    quotient = hex;
 
    //Entering values to the hexArr
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexArr[j++] = 48 + remainder;
        else
            hexArr[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    // print the characters of the array
    for (i = j; i >= 0; i--)
            printf("%c", hexArr[i]);
}

int main(int argc, char **argv) {
    FILE *f = stdin;
    int dbgFlag=0;
    int minusEFlag=0;
    int plusEFlag=0;
    int minusIFlag=0;
    int idx=0;
    int enc[20];
    int encSize=0;
    char myInput;
    char* fileName;

    char c;
     for (int i = 1; i < argc; i++){
         if(strcmp(argv[i],"-D")==0){
             printf("%s", "DebugMode");
            dbgFlag=1;
         }
         if(strncmp(argv[i], "-e",2)==0){
             //printf("%s", "-eFlag");
             minusEFlag=1;
            for(int j=2; j<strlen(argv[i]); j++){
                if (argv[i][j]>=48 && argv[i][j]<=72)
                {
                    enc[idx]=argv[i][j]-'\0';
                    enc[idx]-='0';
                    idx++;
                }
            }
            enc[idx]='\0';
         }
         if(strncmp(argv[i], "+e",2)==0){
            //printf("%s", "+eFlag");
             plusEFlag=1;
            for(int j=2; j<strlen(argv[i]); j++){
                if (argv[i][j]>=48 && argv[i][j]<=72)
                {
                    enc[idx]=argv[i][j]-'\0';
                    enc[idx]-='0';
                    idx++;
                }
            }
            enc[idx]='\0';
         }

         if(strncmp(argv[i], "-i",2)==0){
            minusIFlag=1;
            FILE *f2= fopen(argv[i]+2,"r");

     if (minusEFlag || plusEFlag){
         int inputIdx=0;
         char ch=fgetc(f2);
            if(minusEFlag){
                while(ch != EOF){
                    int check=inputIdx%(int)(idx);
                    printf("%c", ch-enc[check]);
                    inputIdx++;
                    ch=fgetc(f2);
                }
            }
            
            if(plusEFlag){
                while(ch != EOF){
                    int check=inputIdx%(int)(idx);
                    printf("%c", ch+enc[check]);
                    inputIdx++;
                    ch=fgetc(f2);
                }
            }
         }

         else 
         {
            int ch = fgetc(f2);
        while (ch != EOF)
        {
            c= ch;
            if(ch >= 'a' && ch <= 'z') 
            {
                c = ch - 32;
            }
            printf("%c", c);
            ch = fgetc(f2);
        }
         }

         }

     }

     if (minusEFlag || plusEFlag){
         int inputIdx=0;
         char ch=getchar();
            if(minusEFlag){
                while(ch != EOF){
                    int check=inputIdx%(int)(idx);
                    printf("%c", ch-enc[check]);
                    inputIdx++;
                    ch=getchar();
                }
            }
            
            if(plusEFlag){
                while(ch != EOF){
                    int check=inputIdx%(int)(idx);
                    printf("%c", ch+enc[check]);
                    inputIdx++;
                    ch=getchar();
                }
            }
         }
     
         

    if(argc == 1)
    {
        int ch = fgetc(f);
        while (ch != EOF)
        {
            c= ch;
            if(ch >= 'a' && ch <= 'z') 
            {
                c = ch - 32;
            }
            printf("%c", c);
            ch = fgetc(f);
        }
    }

    else if (dbgFlag){
        int ch = fgetc(f);
        fprintf(stderr,"-D\n");
        while (ch != EOF)
        {
            if(ch != '\n'){
                if(isLower(ch)) 
                    fprintf(stderr,"%X",upper(ch));
                else 
                    fprintf(stderr,"%X",ch);

                fprintf(stderr,"%c",' ');
                fprintf(stderr, "%X",ch);
                fprintf(stderr, "%c",'\n');          
        }

            c= ch;
            if(ch >= 'a' && ch <= 'z') 
            {
                c = ch - 32;
            }
            printf("%c", c);
            ch = fgetc(f);
        }


    }


    return 0;
}