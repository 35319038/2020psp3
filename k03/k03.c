#include <stdio.h>

#define DEBUG

#define ALPHABET_LEN    255

char StrOriginal[] = "On a dark deseart highway, cool wind in my hair.";
char StrKey[] = "wind";

char* ForceSearch(char text[], char key[])
{
    int text_len=0;
    int start;
    int pos;
    int key_len=0;
    int i,j;
    
    for(i=0;text[i]!='\0';i++){
        text_len=text_len+1;//  ここを実装する
    }

    for(j=0;key[j]!='\0';j++){
        key_len=key_len+1;
    }

    for(start=0;text_len-key_len>=start;start++){
        for(pos=0;pos<key_len;pos++){

            if(text[start+pos]==key[pos]){
                if((key_len-1)==pos){
                return text+start;
            }
        }else{
            break;
        }
    }
}
return NULL;
}


char* BMSearch(char text[], char key[])
{
    int text_len;
    int key_len=0;
    int index;
    int table[256];
    int i,j;
    int new_index;


    for(i=0;text[i]!='\0';i++){
        text_len=text_len+1;
        }

    for(j=0;key[j]!='\0';j++){
        key_len=key_len+1;
        }

    for(i=0;i<=255;i++){
        table[i]=key_len;
    }

    for(i=0;i<key_len;i++){
        table[key[i]]=key_len-(i+1);
    }
       
    index=key_len-1;
    while(index<=text_len-1){
printf("%s\n", text);
for (int k=0; k < index - key_len + 1; k++) {
printf(" ");
}
printf("%s\n", key);

        for(i=0;i<=key_len-1;i++){
            printf ("loop = %d\n", i);
            printf("text=%c, key=%c\n", text[index-i], key[i]);
            if(text[index-i]==key[key_len-i-1]){
        
                if(i==key_len-1){
                    return text+index-(key_len-1);
                 } else {

                 }
            }else{
               break;
            }
        
        }
    new_index=index-i+table[text[index-i]];
    printf("new_index = %d, index = %d, i = %d\n", new_index, index, i);
    if(new_index>index){
        index=new_index;
    }else{
        index=index+1;
    }
    }
    return NULL;
    
    //  ここを実装する

}

int main(void)
{
    char*   str;
    str = ForceSearch(StrOriginal, StrKey);
    printf("Force Search. Find keyword at:%s\n", str);

    str = BMSearch(StrOriginal, StrKey);
    printf("BM Search. Find keyword at:%s\n", str);

    return 0;
}