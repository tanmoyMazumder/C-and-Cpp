#include<bits/stdc++.h>

using namespace std;

int isAConsonant(char c)
{
    int f=0;
    if((c>65 && c<69)|| (c>69 && c<73) ||(c>73 && c<79)||(c>79 && c<85)||(c>85 && c<91))f++;
    return f;
}
int calculateWhitespace(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' ||s[i]=='\n' ||s[i]=='\t'  ) c++;
    }
    return c;
}

int calculateVowels(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||
           s[i]=='A'||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ) c++;
    }
    return c;

}

int calculateDigits(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>47 && s[i]<58) c++;
    }
    return c;

}
int main()
{
    //1.
    //Write a program to print a string entered by user.
    string s;
    getline(cin,s);
    cout<<"Output of problem 1: "<<s<<"\n\n";


    //2.
    //Write a program to print every character
    //of a string entered by user in a new line using loop.

    cout<<"Output of problem 2: ";
    for(int i;i<s.size();i++) cout<<s[i];
    cout<<"\n\n";

    //3.
    //Write a program to input and display the sentence I love Programming.
    getline(cin,s);
    cout<<"Output of problem 3: "<<s<<"\n\n";

    //4.
    //Write a program to find the length of the string "refrigerator".
    s="refrigerator";
    cout<<"Output of problem 4: "<<s.size()<<"\n\n";

    //5.
    //Write a program to find whether a string is a Palindrome or not.
    int i;
    string s2,s1;
    cout<<"Problem 5, enter string:";
    cin>>s;
    s1=s;
    s1.erase((s1.size())/2,s1.size());
    s2=s;
    s2.erase(0,(s2.size()+(s.size()%2))/2);
    reverse(s2.begin(),s2.end());
    cout<<"Output of problem 5: ";
    if(s1==s2)cout<<"palindrome\n";
    else cout<<"aint palindrome\n";

    //6.
    //Write a program to enter a string s1 and copy it to another string s2.
    cout<<"\nProblem 6, enter string:";
    getchar();
    getline(cin,s);
    s1=s;


    // 7.
    //Write a program to compare if the two strings entered by user are equal or not.
    cout<<"\nProblem 7, enter strings:";
    getline(cin,s1);
    getline(cin,s2);
    cout<<"Output of problem 7: \n";
    if(s1==s2)cout<<"equal\n";
    else cout<<"inequal\n";

    //
    //8.
    //Write a program to check if the letter 'e' is present in the word 'Umbrella'.
    s="umbrella";
    int p=s.find("e");
    cout<<"Output of problem 8: \n";
    if(p!=-1) cout<<"found\n";
    else cout<<"not found\n";

    //
    //9.
    //Write a program to check if the word 'orange' is present in the "This is orange juice".
    s="This is orange juice";
    p=s.find("orange");
    cout<<"Output of problem 9: \n";
    if(p!=-1) cout<<"orange found in orange juice \n";
    else cout<<"orange juice doesn't have orange\n";

    //
    //10.
    //Write a program to find the first and the last occurence of the letter 'o' and character ',' in
    //"Hello, World".
    s="Hello, World";
    cout<<"Output of problem 10: \n";
    cout<<"first and last occurrence of o: "<<s.find("o")<<" "<<s.rfind("o")<<"\n";
    cout<<"first and last occurrence of , : "<<s.find(",")<<" "<<s.rfind(",");

    //
    //11.
    //Write the string after the first occurrence of ',' and the string after the last occurrence of ','
    //in the string "Hello, Good, Morning".
    cout<<"\nOutput of problem 11: \n";
    s="Hello, Good, Morning";
    for (int i=s.find(",")+1;i<s.size();i++)  cout<<s[i];
    cout<<"\n";
    for (int i=s.rfind(",")+1;i<s.size();i++)  cout<<s[i];

    //
    //12.
    //Write a program that takes your full name as input and displays the abbreviations of the
    //first and middle names except the last name which is displayed as it is. For example, if
    //your name is Robert Brett Roser, then the output should be R.B.Roser.
    cout<<"\nOutput of problem 12: \n";
    string name="Clark Joseph Kent";
    char a,b;
    a=name[0];
    b=name[name.find(" ")+1];
    cout<<a<<"."<<b<<".";
    for(int i=name.rfind(" ")+1; i<name.size(); i++) cout<<name[i];

    //
    //13.
    //Write a program to find the number of vowels, consonants, digits and white space
    //characters in a string.
    cout<<"\nOutput of problem 13: \n";
    int v,c,d,w;
    s="Th3 night is dark and fu11 of terr0rs";
    v=calculateVowels(s);
    d=calculateDigits(s);
    w=calculateWhitespace(s);
    c=s.size()-v-d-w;
    cout<<"vowels, consonants, digits and white spaces:"<<v<<" "<<c<<" "<<d<<" "<<w<<"\n";

    //
    //14.
    //Write a program to delete all consonants from the string "Hello, have a good day".
    cout<<"\nOutput of problem 14: \n";
    s="Hello, have a good day";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(i=0;i<s.size();i++)
    {
        if(isAConsonant(s[i])!=0) s.erase(i,1);
    }
    cout<<"after deletion: "<<s<<"\n";

    //
    //15.
    //Input a string of alphabets. Find out the number of occurrence of all alphabets in that
    //string. Find out the alphabet with maximum occurrence.
    cout<<"\nOutput of problem 15: \n";
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int ref[26]={0},comp[26]={0},max_number=-1,x,pos;
    for(int i=0;i<s.size();i++)ref[s[i]-65]++;
    for(int i=0;i<26;i++)
    {
         x=i+65;
        cout<<(char)x<<":"<<ref[i]<<"\n";
        if(ref[i]>max_number)
        {
            max_number=ref[i];
            pos=i;
        }
    }
    pos=pos+65;
    cout<<"maximum occurrences:"<<(char)pos<<"\n";

    return 0;
}












