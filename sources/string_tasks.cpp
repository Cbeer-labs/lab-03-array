// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
    if (name.size()%2==0) return true;
    else return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    if (name_one.size()>name_two.size()) return true;
    else return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    int max1=name_one.size();
    int max2=name_two.size();
    int max3=name_three.size();
    int mas[3]={max1,max2,max3};
    int maxx=-10000;
    int minn=10000;
    for(int i =0;i<3;++i){
        if(mas[i]>maxx) maxx=mas[i];
        if (mas[i]<minn) minn=mas[i];
    }
    if (maxx == max1) the_longest=name_one;
    else if (maxx == max2) the_longest=name_two;
    else the_longest=name_three;

    if (minn == max1) the_shortest=name_one;
    else if (minn == max2) the_shortest=name_two;
    else the_shortest=name_three;

}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {

    return std::string(word.substr(m, n-m+1));
}

// Task 9.
void add_stars(std::string& word) {
    int len = word.size();
    std::string zv(len, '*');
    word = zv + word + zv;

}

// Task 10.
int percent_of_a(const std::string& word) {
    int pro=0;
    int kol_a=0;
    int si = word.size();
    for(int i=0;i<si;++i){
        if (word[i]=='a') kol_a++;
    }
    pro = (float(kol_a)/word.size())*100;

    return pro;

}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string str1, str3;
    std::string str2 = "Can you can a can as a canner can can a can?q";
    std::string can = new_word+' ';
    while (str2.find(can) != std::string::npos){
        auto pos = str2.find(can);
        str2.erase(pos, can.size());
        str2.insert(pos, str3+" ");
    }
    can = "Can ";
    if ((str3[0] > 96) && (str3[0] < 123))
        str3[0] -= 32;
    while (str2.find(can) != std::string::npos) {
        auto pos = str2.find(can);
        str2.erase(pos, can.size());
        str2.insert(pos, str3+" ");
    }
    return std::string(str2);
}