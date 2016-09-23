/**@file test_match.cpp
 * An example of performing regex match against a pattern with JPCRE2 and getting the
 * match count and match results.
 * Shows how to iterate over the match results to get the captured groups/substrings.
 * @include test_match.cpp
 * @author [Md Jahidul Hamid](https://github.com/neurobin)
 * */

#include <iostream>
#define PCRE2_CODE_UNIT_WIDTH 32
#define JPCRE2_USE_WSTRING
#include "jpcre2.cpp"



int main() {
    
    std::wstring s = L"I am a subject";
    std::wstring m = L"g";
    std::wstring p = LR"(\w)";
    std::wstring q(L"fsdfd");
    
    
    
    //std::wcout<<toString(87837487);
    jpcre2::Regex re(p);
    re.getMatchObject().setSubject(s);
    
    std::wcout<<jpcre2::Regex(p).match(s,m);
    
    return 0;
}
