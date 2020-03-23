#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"

TEST_CASE("v and w")
{
string str = "very wierd way";
CHECK( phonetic::search(str,"wery").compare("very") == 0 );
CHECK( phonetic::search(str,"WEry").compare("very") == 0 );
CHECK( phonetic::search(str,"very").compare("very") == 0 );
CHECK( phonetic::search(str,"VeRY").compare("very") == 0 );
CHECK( phonetic::search(str,"vierd").compare("wierd") == 0 );
CHECK( phonetic::search(str,"ViErd").compare("wierd") == 0 );
CHECK( phonetic::search(str,"wierd").compare("wierd") == 0 );
CHECK( phonetic::search(str,"WIERD").compare("wierd") == 0 );
CHECK( phonetic::search(str,"vay").compare("way") == 0 );
CHECK( phonetic::search(str,"VAy").compare("way") == 0 );
CHECK( phonetic::search(str,"way").compare("way") == 0 );
CHECK( phonetic::search(str,"Way").compare("way") == 0 );

}

