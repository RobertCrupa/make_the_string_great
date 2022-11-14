#include <string>

std::string makeGood(std::string s) {
        int len = s.length(); // Keep track of dynamic length

        for(int i = 0; i <= (len - 2); ) // Scan entire string
        {
            if( abs(s[i] - s[i + 1]) == 32 ) // Same characters, different case
            {
                s.erase(i, 2); // Remove two adjacent characters
                len -= 2;
                
                if( i > 0 )
                {
                    --i; // Check if new adjacent characters make bad string
                }
            }
            else
            {
                ++i;
            }
        }
        return s;
    }