#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"


TEST_CASE(" b , f and p")
{
    string str = "A Bar is also known for pub";
            CHECK( phonetic::find(str,"bar").compare("bar") == 0 );
            CHECK( phonetic::find(str,"far").compare("bar") == 0 );
            CHECK( phonetic::find(str,"par").compare("bar") == 0 );
            CHECK( phonetic::find(str,"Bar").compare("bar") == 0 );
            CHECK( phonetic::find(str,"Far").compare("bar") == 0 );
            CHECK( phonetic::find(str,"Par").compare("bar") == 0 );

            CHECK( phonetic::find(str,"for").compare("for") == 0 );
            CHECK( phonetic::find(str,"For").compare("for") == 0 );
            CHECK( phonetic::find(str,"poR").compare("for") == 0 );
            CHECK( phonetic::find(str,"Por").compare("for") == 0 );
            CHECK( phonetic::find(str,"Bor").compare("for") == 0 );
            CHECK( phonetic::find(str,"bor").compare("for") == 0 );

            CHECK( phonetic::find(str,"FuB").compare("pub") == 0 );
            CHECK( phonetic::find(str,"buB").compare("pub") == 0 );
            CHECK( phonetic::find(str,"Fuf").compare("pub") == 0 );
            CHECK( phonetic::find(str,"Pup").compare("pub") == 0 );
            CHECK( phonetic::find(str,"FuF").compare("pub") == 0 );
            CHECK( phonetic::find(str,"Buf").compare("pub") == 0 );
}
TEST_CASE(" c , k and q")
{
    string str = "Corona can kill the Queen";
            CHECK( phonetic::find(str,"KorOna").compare("corona") == 0 );
            CHECK( phonetic::find(str,"qoroNa").compare("corona") == 0 );
            CHECK( phonetic::find(str,"Corona").compare("corona") == 0 );
            CHECK( phonetic::find(str,"kORona").compare("corona") == 0 );
            CHECK( phonetic::find(str,"corona").compare("corona") == 0 );

            CHECK( phonetic::find(str,"Kan").compare("can") == 0 );
            CHECK( phonetic::find(str,"qan").compare("can") == 0 );
            CHECK( phonetic::find(str,"Qan").compare("can") == 0 );
            CHECK( phonetic::find(str,"cAn").compare("can") == 0 );
            CHECK( phonetic::find(str,"cAN").compare("can") == 0 );

            CHECK( phonetic::find(str,"Kill").compare("kill") == 0 );
            CHECK( phonetic::find(str,"KIll").compare("kill") == 0 );
            CHECK( phonetic::find(str,"Cill").compare("kill") == 0 );
            CHECK( phonetic::find(str,"Qill").compare("kill") == 0 );
            CHECK( phonetic::find(str,"kill").compare("kill") == 0 );

            CHECK( phonetic::find(str,"Cueen").compare("queen") == 0 );
            CHECK( phonetic::find(str,"Kueen").compare("queen") == 0 );
            CHECK( phonetic::find(str,"QuEEn").compare("queen") == 0 );
            CHECK( phonetic::find(str,"kueen").compare("queen") == 0 );
            CHECK( phonetic::find(str,"cUeen").compare("queen") == 0 );


}

TEST_CASE(" g and j")
{
    string str = "Gill likes smoke joint";
            CHECK( phonetic::find(str,"GIll").compare("gill") == 0 );
            CHECK( phonetic::find(str,"jILL").compare("gill") == 0 );
            CHECK( phonetic::find(str,"Jill").compare("gill") == 0 );
            CHECK( phonetic::find(str,"gilL").compare("gill") == 0 );

            CHECK( phonetic::find(str,"Joint").compare("joint") == 0 );
            CHECK( phonetic::find(str,"GoiNT").compare("joint") == 0 );
            CHECK( phonetic::find(str,"jOINT").compare("joint") == 0 );
            CHECK( phonetic::find(str,"gOINt").compare("joint") == 0 );

}
TEST_CASE(" s and z")
{
    string str = "Zion williamson is the most athletic player";
            CHECK( phonetic::find(str,"ZION").compare("zion") == 0 );
            CHECK( phonetic::find(str,"Sion").compare("zion") == 0 );
            CHECK( phonetic::find(str,"ziOn").compare("zion") == 0 );
            CHECK( phonetic::find(str,"sIoN").compare("zion") == 0 );

            CHECK( phonetic::find(str,"WILLIamZon").compare("williamson") == 0 );
            CHECK( phonetic::find(str,"williAMSoN").compare("williamson") == 0 );
            CHECK( phonetic::find(str,"WILLIAMsON").compare("williamson") == 0 );
            CHECK( phonetic::find(str,"WILLIAMzON").compare("williamson") == 0 );

            CHECK( phonetic::find(str,"IS").compare("is") == 0 );
            CHECK( phonetic::find(str,"IZ").compare("is") == 0 );
            CHECK( phonetic::find(str,"Is").compare("is") == 0 );
            CHECK( phonetic::find(str,"iz").compare("is") == 0 );

}
TEST_CASE(" d and t")
{
    string str = "i dont like to study c++";
            CHECK( phonetic::find(str,"TOND").compare("dont") == 0 );
            CHECK( phonetic::find(str,"tond").compare("dont") == 0 );
            CHECK( phonetic::find(str,"donT").compare("dont") == 0 );
            CHECK( phonetic::find(str,"Tond").compare("dont") == 0 );
            CHECK( phonetic::find(str,"dont").compare("dont") == 0 );

            CHECK( phonetic::find(str,"sduty").compare("study") == 0 );
            CHECK( phonetic::find(str,"sDuty").compare("study") == 0 );
            CHECK( phonetic::find(str,"sduTy").compare("study") == 0 );
            CHECK( phonetic::find(str,"STUDY").compare("study") == 0 );
            CHECK( phonetic::find(str,"stUdy").compare("study") == 0 );
            CHECK( phonetic::find(str,"stUdY").compare("study") == 0 );
}

TEST_CASE(" o and u")
{
    string str = "the hour is one at our country";
            CHECK( phonetic::find(str,"huor").compare("hour") == 0 );
            CHECK( phonetic::find(str,"hOOr").compare("hour") == 0 );
            CHECK( phonetic::find(str,"hOUr").compare("hour") == 0 );

            CHECK( phonetic::find(str,"ONe").compare("one") == 0 );
            CHECK( phonetic::find(str,"One").compare("one") == 0 );
            CHECK( phonetic::find(str,"Une").compare("one") == 0 );

            CHECK( phonetic::find(str,"Uur").compare("our") == 0 );
            CHECK( phonetic::find(str,"uor").compare("our") == 0 );
            CHECK( phonetic::find(str,"uOr").compare("our") == 0 );
            CHECK( phonetic::find(str,"our").compare("our") == 0 );
            CHECK( phonetic::find(str,"OUR").compare("our") == 0 );

            CHECK( phonetic::find(str,"cuuntry").compare("country") == 0 );
            CHECK( phonetic::find(str,"CUUntry").compare("country") == 0 );
            CHECK( phonetic::find(str,"coontry").compare("country") == 0 );
            CHECK( phonetic::find(str,"COONtry").compare("country") == 0 );
            CHECK( phonetic::find(str,"cuontry").compare("country") == 0 );
            CHECK( phonetic::find(str,"CUOntry").compare("country") == 0 );
            CHECK( phonetic::find(str,"country").compare("country") == 0 );
            CHECK( phonetic::find(str,"COUNTry").compare("country") == 0 );

}
TEST_CASE(" i and y")
{
    string str = "Yin and Yang have corona ";
            CHECK( phonetic::find(str,"YIN").compare("yin") == 0 );
            CHECK( phonetic::find(str,"iyn").compare("yin") == 0 );
            CHECK( phonetic::find(str,"IYn").compare("yin") == 0 );
            CHECK( phonetic::find(str,"yIn").compare("yin") == 0 );

            CHECK( phonetic::find(str,"YanG").compare("yang") == 0 );
            CHECK( phonetic::find(str,"yaNg").compare("yang") == 0 );
            CHECK( phonetic::find(str,"Iang").compare("yang") == 0 );
            CHECK( phonetic::find(str,"iANg").compare("yang") == 0 );
}
TEST_CASE("v and w")
{
    string str = "Wow this cake is very good";
            CHECK( phonetic::find(str,"WOW").compare("wow") == 0 );
            CHECK( phonetic::find(str,"WoV").compare("wow") == 0 );
            CHECK( phonetic::find(str,"WOv").compare("wow") == 0 );
            CHECK( phonetic::find(str,"Vow").compare("wow") == 0 );
            CHECK( phonetic::find(str,"vOW").compare("wow") == 0 );
            CHECK( phonetic::find(str,"VoW").compare("wow") == 0 );
            
            CHECK( phonetic::find(str,"Very").compare("very") == 0 );
            CHECK( phonetic::find(str,"veRY").compare("very") == 0 );
            CHECK( phonetic::find(str,"wERY").compare("very") == 0 );
            CHECK( phonetic::find(str,"WEry").compare("very") == 0 );
//            CHECK( phonetic::find(str,"eeeeee").compare("very") == 0 );
//            CHECK( phonetic::find(str,"").compare("") == 0 );

}



