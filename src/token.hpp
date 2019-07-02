#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <boost/tokenizer.hpp>

std::vector<std::string> generateTokens(std::string calc) {
    boost::char_separator<char> sep(" ");
	typedef boost::tokenizer< boost::char_separator<char> > t_tokenizer;
	t_tokenizer tok(calc, sep);

    std::vector<std::string> tokens;

    for(t_tokenizer::iterator beg=tok.begin(); beg!=tok.end(); ++beg) {
       tokens.push_back(*beg);
    }
    
    std::vector<std::string> tokensVector;
    for (int i = 0; i < tokens.size(); i++) {
        tokensVector.push_back(tokens.at(i));
    }

    return tokensVector;
}