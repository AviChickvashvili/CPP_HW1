#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"

TEST_CASE("v and w")
{
    string str = "very wierd way";
    CHECK( phonetic::find(str,"wery").compare("very") == 0 );
     CHECK( phonetic::find(str,"WEry").compare("very") == 0 );
    CHECK( phonetic::find(str,"very").compare("very") == 0 );
     CHECK( phonetic::find(str,"VeRY").compare("very") == 0 );
    CHECK( phonetic::find(str,"vierd").compare("wierd") == 0 );
     CHECK( phonetic::find(str,"ViErd").compare("wierd") == 0 );
    CHECK( phonetic::find(str,"wierd").compare("wierd") == 0 );
    CHECK( phonetic::find(str,"WIERD").compare("wierd") == 0 );
    CHECK( phonetic::find(str,"vay").compare("way") == 0 );
    CHECK( phonetic::find(str,"VAy").compare("way") == 0 );
    CHECK( phonetic::find(str,"way").compare("way") == 0 );
    CHECK( phonetic::find(str,"Way").compare("way") == 0 );
  
}
TEST_CASE(" b , f and p")
{
    string str = "bees are fairly small but pretty potent";
    CHECK( phonetic::find(str,"fees").compare("bees") == 0 );
    CHECK( phonetic::find(str,"FEes").compare("bees") == 0 );
    CHECK( phonetic::find(str,"pees").compare("bees") == 0 );
    CHECK( phonetic::find(str,"Pees").compare("bees") == 0 );
    CHECK( phonetic::find(str,"pairly").compare("fairly") == 0 );
    CHECK( phonetic::find(str,"PAIRly").compare("fairly") == 0 );
    CHECK( phonetic::find(str,"bairly").compare("fairly") == 0 );
    CHECK( phonetic::find(str,"BAirly").compare("fairly") == 0 );
    CHECK( phonetic::find(str,"fretty").compare("pretty") == 0 );
    CHECK( phonetic::find(str,"FRETty").compare("pretty") == 0 );
    CHECK( phonetic::find(str,"bretty").compare("pretty") == 0 );
    CHECK( phonetic::find(str,"Bretty").compare("pretty") == 0 );
    CHECK( phonetic::find(str,"botent").compare("potent") == 0 );
    CHECK( phonetic::find(str,"BoTEnt").compare("potent") == 0 );
    CHECK( phonetic::find(str,"fotent").compare("potent") == 0 );
    CHECK( phonetic::find(str,"Fotent").compare("potent") == 0 );
    CHECK( phonetic::find(str,"potent").compare("potent") == 0 );
  
}
TEST_CASE(" g and j")
{
    string str = "this jar is big and weight atleast ten grams";
    CHECK( phonetic::find(str,"gar").compare("jar") == 0 );
    CHECK( phonetic::find(str,"jar").compare("jar") == 0 );
    CHECK( phonetic::find(str,"JAR").compare("jar") == 0 );
    CHECK( phonetic::find(str,"GAR").compare("jar") == 0 );
    CHECK( phonetic::find(str,"bij").compare("big") == 0 );
    CHECK( phonetic::find(str,"bIJ").compare("big") == 0 );
    CHECK( phonetic::find(str,"big").compare("big") == 0 );
    CHECK( phonetic::find(str,"BIG").compare("big") == 0 );
    CHECK( phonetic::find(str,"weijht").compare("weight") == 0 );
    CHECK( phonetic::find(str,"weIjHt").compare("weight") == 0 );
    CHECK( phonetic::find(str,"weight").compare("weight") == 0 );
    CHECK( phonetic::find(str,"WEIGHT").compare("weight") == 0 );
    CHECK( phonetic::find(str,"jrams").compare("grams") == 0 );
    CHECK( phonetic::find(str,"JRAMs").compare("grams") == 0 );
    CHECK( phonetic::find(str,"grams").compare("grams") == 0 );
    CHECK( phonetic::find(str,"GRAMS").compare("grams") == 0 );

}
TEST_CASE(" c , k and q")
{
    string str = "louis ck is a qualified comedian";
    CHECK( phonetic::find(str,"kc").compare("ck") == 0 );
    CHECK( phonetic::find(str,"Kc").compare("ck") == 0 );
    CHECK( phonetic::find(str,"cc").compare("ck") == 0 );
    CHECK( phonetic::find(str,"CC").compare("ck") == 0 );
    CHECK( phonetic::find(str,"kk").compare("ck") == 0 );
    CHECK( phonetic::find(str,"kK").compare("ck") == 0 );
    CHECK( phonetic::find(str,"ck").compare("ck") == 0 );
    CHECK( phonetic::find(str,"CK").compare("ck") == 0 );
    CHECK( phonetic::find(str,"cq").compare("ck") == 0 );
    CHECK( phonetic::find(str,"Cq").compare("ck") == 0 );
    CHECK( phonetic::find(str,"qq").compare("ck") == 0 );
    CHECK( phonetic::find(str,"QQ").compare("ck") == 0 );
    CHECK( phonetic::find(str,"qc").compare("ck") == 0 );
    CHECK( phonetic::find(str,"Qc").compare("ck") == 0 );
    CHECK( phonetic::find(str,"kq").compare("ck") == 0 );
    CHECK( phonetic::find(str,"kQ").compare("ck") == 0 );
    CHECK( phonetic::find(str,"qk").compare("ck") == 0 );
    CHECK( phonetic::find(str,"QK").compare("ck") == 0 );
    CHECK( phonetic::find(str,"cualified").compare("qualified") == 0 );
    CHECK( phonetic::find(str,"CuaLiFied").compare("qualified") == 0 );
    CHECK( phonetic::find(str,"kualified").compare("qualified") == 0 );
    CHECK( phonetic::find(str,"KUAlified").compare("qualified") == 0 );
    CHECK( phonetic::find(str,"qualified").compare("qualified") == 0 );
    CHECK( phonetic::find(str,"QUALified").compare("qualified") == 0 );
    CHECK( phonetic::find(str,"komedian").compare("comedian") == 0 );
    CHECK( phonetic::find(str,"KOMedian").compare("comedian") == 0 );
    CHECK( phonetic::find(str,"qomedian").compare("comedian") == 0 );
    CHECK( phonetic::find(str,"qoMEDian").compare("comedian") == 0 );
    CHECK( phonetic::find(str,"comedian").compare("comedian") == 0 );
    CHECK( phonetic::find(str,"COMEDIAN").compare("comedian") == 0 );
}
TEST_CASE(" s and z")
{
    string str = "souzen really likes booze";
    CHECK( phonetic::find(str,"sousen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"souzen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"SOUZen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"SouSen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"zouzen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"ZOUzen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"zousen").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"zouSEN").compare("souzen") == 0 );
    CHECK( phonetic::find(str,"likez").compare("likes") == 0 );
    CHECK( phonetic::find(str,"liKEZ").compare("likes") == 0 );
    CHECK( phonetic::find(str,"likes").compare("likes") == 0 );
    CHECK( phonetic::find(str,"LIKES").compare("likes") == 0 );
    CHECK( phonetic::find(str,"boose").compare("booze") == 0 );
    CHECK( phonetic::find(str,"BOOse").compare("booze") == 0 );
    CHECK( phonetic::find(str,"booze").compare("booze") == 0 );
    CHECK( phonetic::find(str,"BOOZE").compare("booze") == 0 );
}
TEST_CASE(" d and t")
{
    string str = "dorothy takes drugs";
    CHECK( phonetic::find(str,"torothy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"tOROThy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"dorodhy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"DORodhy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"torodhy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"toRODhy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"dorothy").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"DOROTHY").compare("dorothy") == 0 );
    CHECK( phonetic::find(str,"dakes").compare("takes") == 0 ); 
    CHECK( phonetic::find(str,"DAKes").compare("takes") == 0 ); 
    CHECK( phonetic::find(str,"takes").compare("takes") == 0 ); 
    CHECK( phonetic::find(str,"TAKES").compare("takes") == 0 ); 
    CHECK( phonetic::find(str,"trugs").compare("drugs") == 0 ); 
    CHECK( phonetic::find(str,"TRUGs").compare("drugs") == 0 ); 
    CHECK( phonetic::find(str,"drugs").compare("drugs") == 0 );
    CHECK( phonetic::find(str,"DrugS").compare("drugs") == 0 );
}
TEST_CASE(" o and u")
{
    string str = "our country is israel";
    CHECK( phonetic::find(str,"oor").compare("our") == 0 );
    CHECK( phonetic::find(str,"OOR").compare("our") == 0 );
    CHECK( phonetic::find(str,"uur").compare("our") == 0 );
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
    string str = "i am very happy";
    CHECK( phonetic::find(str,"y").compare("i") == 0 );
    CHECK( phonetic::find(str,"Y").compare("i") == 0 );
    CHECK( phonetic::find(str,"i").compare("i") == 0 );
    CHECK( phonetic::find(str,"I").compare("i") == 0 );
    CHECK( phonetic::find(str,"veri").compare("very") == 0 );
    CHECK( phonetic::find(str,"veRI").compare("very") == 0 );
    CHECK( phonetic::find(str,"very").compare("very") == 0 );
    CHECK( phonetic::find(str,"vERY").compare("very") == 0 );
    CHECK( phonetic::find(str,"happi").compare("happy") == 0 );
    CHECK( phonetic::find(str,"haPPI").compare("happy") == 0 );
    CHECK( phonetic::find(str,"happy").compare("happy") == 0 );
    CHECK( phonetic::find(str,"HAPPY").compare("happy") == 0 );
}
TEST_CASE(" everything toghter :( ")
{
    string str = "the boy is in custody for wearing a bodysuit";
    CHECK( phonetic::find(str,"dhe").compare("the") == 0 );
    CHECK( phonetic::find(str,"fui").compare("boy") == 0 );
    CHECK( phonetic::find(str,"pui").compare("boy") == 0 );
    CHECK( phonetic::find(str,"iz").compare("is") == 0 );
    CHECK( phonetic::find(str,"yn").compare("in") == 0 );
    CHECK( phonetic::find(str,"kozduti").compare("custody") == 0 );
    CHECK( phonetic::find(str,"qozduti").compare("custody") == 0 );
    CHECK( phonetic::find(str,"fur").compare("for") == 0 );
    CHECK( phonetic::find(str,"vearynj").compare("wearing") == 0 );
    CHECK( phonetic::find(str,"futizoyd").compare("bodysuit") == 0 );
    CHECK( phonetic::find(str,"putizoyd").compare("bodysuit") == 0 );
}
