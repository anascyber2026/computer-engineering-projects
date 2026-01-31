#include<iostream>
#include<string>
#include<windows.h>
#include<algorithm>
#include<vector>
using namespace std;
string code1 (char y)
{
	switch(y)
	{
		case 'a':
		cout<<"b#^.5";
		break;
		case 'A':
		cout<<"a%-0k";
		break;
		case 'b':
		cout<<"?5b$5";
		break;
		case 'B':
		cout<<";8hak";
		break;
		case 'c':
		cout<<"6m.~k";
		break;
		case 'C':
		cout<<"p30$b";
		break;
		case 'd':
		cout<<"o%0b5";
		break;
		case 'D':
		cout<<"c2eb$";
		break;
		case 'e':
		cout<<"?fb4a";
		break;
		case 'E':
		cout<<"6e*0#";
		break;
		case 'f':
		cout<<"~^q##";
		break;
		case 'F':
		cout<<"^-b$#";
		break;
		case 'g':
		cout<<"%#bq5";
		break;
		case 'G':
		cout<<">.k_a";
		break;
		case 'h':
		cout<<"w#06k";
		break;
		case 'H':
		cout<<"8vs-5";
		break;
		case 'i':
		cout<<"!85p0";
		break;
		case 'I':
		cout<<"##//.";
		break;
		case 'j':
		cout<<"9ab-k";
		break;
		case 'J':
		cout<<"#z#?#";
		break;
		case 'k':
		cout<<"&x455";
		break;
		case 'K':
		cout<<"&5@+#";
		break;
		case 'l':
		cout<<"/o$y#";
		break;
		case 'L':
		cout<<"*975#";
		break;
		case 'm':
		cout<<"e64ab";
		break;
		case 'M':
		cout<<"2259^";
		break;
		case 'n':
		cout<<"3*p$#";
		break;
		case 'N':
		cout<<"|t?k5";
		break;
		case 'o':
		cout<<"%*+#$";
		break;
		case 'O':
		cout<<"d8gaa";
		break;
		case 'p':
		cout<<"/zka#";
		break;
		case 'P':
		cout<<"@&#$a";
		break;
		case 'q':
		cout<<"@&*##";
		break;
		case 'Q':
		cout<<"cyf.5";
		break;
		case 'r':
		cout<<"!8t;#";
		break;
		case 'R':
		cout<<"*%0r.";
		break;
		case 's':
		cout<<"-8v@#";
		break;
		case 'S':
		cout<<"6_abk";
		break;
		case 't':
		cout<<"/;~$.";
		break;
		case 'T':
		cout<<"nmgsb";
		break;
		case 'u':
		cout<<"7@#%v";
		break;
		case 'U':
		cout<<"950p5";
		break;
		case 'v':
		cout<<"<d#@#";
		break;
		case 'V':
		cout<<"#jph.";
		break;
		case 'w':
		cout<<"&9w45";
		break;
		case 'W':
		cout<<"oba.$";
		break;
		case 'x':
		cout<<"2e69b";
		break;
		case 'X':
		cout<<"+7@v#";
		break;
		case 'y':
		cout<<"/0%k$";
		break;
		case 'Y':
		cout<<"^2@#w";
		break;
		case 'z':
		cout<<"rkkba";
		break;
		case 'Z':
		cout<<"c75#$";
		break;
		//all letters --------------------------------------------------------------------------
		//52 lettes (upper case + lower case)
		case '0':
		cout<<"-&?#$";
		break;
		case '1':
		cout<<"<@@!#";
		break;
		case '2':
		cout<<"@%*$#";
		break;
		case '3':
		cout<<"ry^9#";
		break;
		case '4':
		cout<<"2ryak";
		break;
		case '5':
		cout<<";~f#.";
		break;
		case '6':
		cout<<"?h^sa";
		break;
		case '7':
		cout<<"#/5v.";
		break;
		case '8':
		cout<<"4xg5#";
		break;
		case '9':
		cout<<"p3805";
		break;
		//all numbers ---------------------------------------------------------------
		//10 numbers
		case '~':
		cout<<"?6|#.";
		break;
		case '!':
		cout<<"/@%!#";
		break;
		case '#':
		cout<<"h;295";
		break;
		case '$':
		cout<<"/9wy5";
		break;
		case '%':
		cout<<"?2s5.";
		break;
		case '^':
		cout<<"-4295";
		break;
		case '&':
		cout<<"@%285";
		break;
		case '*':
		cout<<"v#.ak";
		break;
		case '(':
		cout<<"@ew6a";
		break;
		case ')':
		cout<<"&<*#.";
		break;
		case '-':
		cout<<"/_qva";
		break;
		case '_':
		cout<<"6!s2k";
		break;
		case '=':
		cout<<"#b.5k";
		break;
		case '+':
		cout<<"_q@#5";
		break;
		case '[':
		cout<<"<-2sa";
		break;
		case ']':
		cout<<"/gw4.";
		break;
		case '{':
		cout<<"&@^g#";
		break;
		case '}':
		cout<<"9xm5k";
		break;
		case ';':
		cout<<"@#@2q";
		break;
		case ':':
		cout<<"p6q*#";
		break;
		case '\'':
		cout<<"dn~05";
		break;
		case '\"':
		cout<<"d@o#$";
		break;
		case '\\':
		cout<<"\eqgb";
		break;
		case '|':
		cout<<"p285.";
		break;
		case ',':
		cout<<";x%#b";
		break;
		case '<':
		cout<<"<6za.";
		break;
		case '>':
		cout<<"?@q~#";
		break;
		case '.':
		cout<<"//!$.";
		break;
		case '/':
		cout<<"p@s#5";
		break;
		case '?':
		cout<<"r&@v5";
		break;
		case ' '://space
		cout<<";@2xa";
		break;
		
		// all symbols -------------------------------------------------------------------
		//31 symbols
		case '�':
		cout<<"1#(8g";
		break;
		case '�':
		cout<<"ry83,";
		break;
		case '�':
		cout<<"p1x2)";
		break;
		case '�':
		cout<<"r1t>#";
		break;
		case '�':
		cout<<"/8li/";
		break;
		case '�':
		cout<<"=(3<.";
		break;
		case '�':
		cout<<"1(g3z";
		break;
		case '�':
		cout<<"[?-gx";
		break;
		case '�':
		cout<<"py2wi";
		break;
		case '�':
		cout<<"#(p@q";
		break;
		case '�':
		cout<<"/1%}a";
		break;
		case '�':
		cout<<"r1^lb";
		break;
		case '�':
		cout<<"p@#&y";
		break;
		case '�':
		cout<<"qb/|(";
		break;
		case '�':
		cout<<"ry_wb";
		break;
		case '�':
		cout<<"cd+~#";
		break;
		case '�':
		cout<<"&;u~$";
		break;
		case '�':
		cout<<"<;c^.";
		break;
		case '�':
		cout<<";>d<#";
		break;
		case '�':
		cout<<"c;dl#";
		break;
		case '�':
		cout<<":8;*u";
		break;
		case '�':
		cout<<"/&uvx";
		break;
		case '�':
		cout<<"[-6w5";
		break;
		case '�':
		cout<<"l4658";
		break;
		case '�':
		cout<<"@m46#";
		break;
		case '�':
		cout<<"?m6}.";
		break;
		case '�':
		cout<<"?m6[$";
		break;
		case '�':
		cout<<"-nm<a";
		break;
		case '�':
		cout<<"=l[6k";
		break;
		case '�':
		cout<<"_>+~#";
		break;
		case '�':
		cout<<"7jhei";
		break;
		case '�':
		cout<<"[l-83";
		break;
		case '�':
		cout<<"hj>la";
		break;
		case '�':
		cout<<">_7i<";
		break;
		default:
		cout<<"INvalid c";
		break;
		//all arbic letters
		//34
	}//for switch
}//for function 1


//-------------------------------------------------------------------------------------------
 
 
string code2 (char y)
{
	switch(y)
	{
		case 'a':
		cout<<"a$^)i";
		break;
		case 'A':
		cout<<"k@nz#";
		break;
		case 'b':
		cout<<"4##$#";
		break;
		case 'B':
		cout<<";~j.#";
		break;
		case 'c':
		cout<<"-n#x#";
		break;
		case 'C':
		cout<<"y~0#]";
		break;
		case 'd':
		cout<<"z^wb#";
		break;
		case 'D':
		cout<<"&@%#$";
		break;
		case 'e':
		cout<<"?!#6b";
		break;
		case 'E':
		cout<<"-qvg$";
		break;
		case 'f':
		cout<<"32eab";
		break;
		case 'F':
		cout<<"@[ik.";
		break;
		case 'g':
		cout<<"q)ie#";
		break;
		case 'G':
		cout<<"{#bw!";
		break;
		case 'h':
		cout<<"0#g?,";
		break;
		case 'H':
		cout<<"3f9-#";
		break;
		case 'i':
		cout<<"*xkpz";
		break;
		case 'I':
		cout<<"kb=1.";
		break;
		case 'j':
		cout<<"*$)m#";
		break;
		case 'J':
		cout<<"bg5[#";
		break;
		case 'k':
		cout<<"~x69#";
		break;
		case 'K':
		cout<<"&5@+#";
		break;
		case 'l':
		cout<<"p0#z5";
		break;
		case 'L':
		cout<<"!sj#$";
		break;
		case 'm':
		cout<<"@][#.";
		break;
		case 'M':
		cout<<"%@$s2";
		break;
		case 'n':
		cout<<"x*e.b";
		break;
		case 'N':
		cout<<"/x-a#";
		break;
		case 'o':
		cout<<"^v7#b";
		break;
		case 'O':
		cout<<"c~wka";
		break;
		case 'p':
		cout<<"pgi),";
		break;
		case 'P':
		cout<<"2,$di";
		break;
		case 'q':
		cout<<"^,<is";
		break;
		case 'Q':
		cout<<":0f,#";
		break;
		case 'r':
		cout<<"*t3u#";
		break;
		case 'R':
		cout<<"s@gy.";
		break;
		case 's':
		cout<<"6i3.f";
		break;
		case 'S':
		cout<<"?i+ik";
		break;
		case 't':
		cout<<"r:3#k";
		break;
		case 'T':
		cout<<"4609#";
		break;
		case 'u':
		cout<<"7%$^s";
		break;
		case 'U':
		cout<<"!$o/#";
		break;
		case 'v':
		cout<<";c%,i";
		break;
		case 'V':
		cout<<"75y+.";
		break;
		case 'w':
		cout<<"<9g-i";
		break;
		case 'W':
		cout<<"z5i]#";
		break;
		case 'x':
		cout<<"@e4*#";
		break;
		case 'X':
		cout<<"+7@v#";
		break;
		case 'y':
		cout<<"r0^#,";
		break;
		case 'Y':
		cout<<"@%2z$";
		break;
		case 'z':
		cout<<"=.ika";
		break;
		case 'Z':
		cout<<"&_abi";
		break;
		//all letters --------------------------------------------------------------------------
		//52 lettes (upper case + lower case)
		case '0':
		cout<<"?&?,$";
		break;
		case '1':
		cout<<"d^%vk";
		break;
		case '2':
		cout<<"2efak";
		break;
		case '3':
		cout<<"1=^!$";
		break;
		case '4':
		cout<<"%1/.i";
		break;
		case '5':
		cout<<"u8s,a";
		break;
		case '6':
		cout<<"[h@#f";
		break;
		case '7':
		cout<<"p$9bi";
		break;
		case '8':
		cout<<"t~zak";
		break;
		case '9':
		cout<<"=xtz#";
		break;
		//all numbers ---------------------------------------------------------------
		//10 numbers
		case '~':
		cout<<"?6/..";
		break;
		case '!':
		cout<<"=%%!#";
		break;
		case '#':
		cout<<"h;2!#";
		break;
		case '$':
		cout<<"/sgy5";
		break;
		case '%':
		cout<<"?9%5.";
		break;
		case '^':
		cout<<"-42v#";
		break;
		case '&':
		cout<<"@%3q5";
		break;
		case '*':
		cout<<"*$.ak";
		break;
		case '(':
		cout<<"@^zi6";
		break;
		case ')':
		cout<<"c;*#.";
		break;
		case '-':
		cout<<"/_29a";
		break;
		case '_':
		cout<<"6sf2k";
		break;
		case '=':
		cout<<"#b.ai";
		break;
		case '+':
		cout<<"_%^#5";
		break;
		case '[':
		cout<<"?:2sa";
		break;
		case ']':
		cout<<"/g06.";
		break;
		case '{':
		cout<<"&qeg#";
		break;
		case '}':
		cout<<"9xn$k";
		break;
		case ';':
		cout<<"$^@2q";
		break;
		case ':':
		cout<<"p6@*#";
		break;
		case '\'':
		cout<<"c-~05";
		break;
		case '\"':
		cout<<"d@g.$";
		break;
		case '\\':
		cout<<"\e@zb";
		break;
		case '|':
		cout<<"y@85.";
		break;
		case ',':
		cout<<";x@bb";
		break;
		case '<':
		cout<<"<605.";
		break;
		case '>':
		cout<<"meq~#";
		break;
		case '.':
		cout<<"=1!$.";
		break;
		case '/':
		cout<<"p@fa5";
		break;
		case '?':
		cout<<"r&@fa";
		break;
		case ' '://space
		cout<<";q^xa";
		break;
		
		// all symbols -------------------------------------------------------------------
		//31 symbols
		case '�':
		cout<<"1#_~g";
		break;
		case '�':
		cout<<"p/83,";
		break;
		case '�':
		cout<<"p12@)";
		break;
		case '�':
		cout<<"=yt>#";
		break;
		case '�':
		cout<<"/3/i/";
		break;
		case '�':
		cout<<"=(3&#";
		break;
		case '�':
		cout<<"pyg3z";
		break;
		case '�':
		cout<<"-6-gx";
		break;
		case '�':
		cout<<"py@gi";
		break;
		case '�':
		cout<<"#/>@q";
		break;
		case '�':
		cout<<"=(%}a";
		break;
		case '�':
		cout<<"r1=@b";
		break;
		case '�':
		cout<<"p^$&y";
		break;
		case '�':
		cout<<"qbpr(";
		break;
		case '�':
		cout<<"r=>wb";
		break;
		case '�':
		cout<<"cd78#";
		break;
		case '�':
		cout<<"&cd~$";
		break;
		case '�':
		cout<<"<;@&.";
		break;
		case '�':
		cout<<";>;:#";
		break;
		case '�':
		cout<<"c;u?#";
		break;
		case '�':
		cout<<":8;vc";
		break;
		case '�':
		cout<<"/d;vx";
		break;
		case '�':
		cout<<"466w5";
		break;
		case '�':
		cout<<"l4m#8";
		break;
		case '�':
		cout<<"@m4-,";
		break;
		case '�':
		cout<<"?m+4.";
		break;
		case '�':
		cout<<"?n?[$";
		break;
		case '�':
		cout<<"-n:-a";
		break;
		case '�':
		cout<<"=l4lk";
		break;
		case '�':
		cout<<"jh+~#";
		break;
		case '�':
		cout<<"7j@ji";
		break;
		case '�':
		cout<<"[l-~t";
		break;
		case '�':
		cout<<"hh7la";
		break;
		case '�':
		cout<<">{ji<";
		break;
		default:
		cout<<"INvalid cb";
		break;
		//all arbic letters
		//34
	}//for switch
}//for function 2


//-------------------------------------------------------------------------------------------
 
 string code3 (char y)
{
	switch(y)
	{
		case 'a':
		cout<<"ka^.5";
		break;
		case 'A':
		cout<<"@#-0k";
		break;
		case 'b':
		cout<<"?5bki";
		break;
		case 'B':
		cout<<";8j#k";
		break;
		case 'c':
		cout<<"6m.ta";
		break;
		case 'C':
		cout<<"p8w$b";
		break;
		case 'd':
		cout<<"o%0#5";
		break;
		case 'D':
		cout<<"c2@#$";
		break;
		case 'e':
		cout<<"i-4a";
		break;
		case 'E':
		cout<<"6e*wa";
		break;
		case 'f':
		cout<<"~^qbi";
		break;
		case 'F':
		cout<<"^-bki";
		break;
		case 'g':
		cout<<"@abq5";
		break;
		case 'G':
		cout<<">.k_a";
		break;
		case 'h':
		cout<<"w#w-k";
		break;
		case 'H':
		cout<<"89!-5";
		break;
		case 'i':
		cout<<"!~$p0";
		break;
		case 'I':
		cout<<"#.|/.";
		break;
		case 'j':
		cout<<"s5b-k";
		break;
		case 'J':
		cout<<"#gi?#";
		break;
		case 'k':
		cout<<"&x6.5";
		break;
		case 'K':
		cout<<";$@+#";
		break;
		case 'l':
		cout<<"/z#y#";
		break;
		case 'L':
		cout<<"*9ji#";
		break;
		case 'm':
		cout<<"e-[ab";
		break;
		case 'M':
		cout<<"225!@";
		break;
		case 'n':
		cout<<"89p$#";
		break;
		case 'N':
		cout<<"|t?#$";
		break;
		case 'o':
		cout<<"%7f#$";
		break;
		case 'O':
		cout<<"d8z#a";
		break;
		case 'p':
		cout<<"/zbi#";
		break;
		case 'P':
		cout<<"@ka$a";
		break;
		case 'q':
		cout<<"@&!$#";
		break;
		case 'Q':
		cout<<"cy955";
		break;
		case 'r':
		cout<<"!x~;#";
		break;
		case 'R':
		cout<<"*0@r.";
		break;
		case 's':
		cout<<"-8%f#";
		break;
		case 'S':
		cout<<"6_#$k";
		break;
		case 't':
		cout<<"|<~$.";
		break;
		case 'T':
		cout<<"nmzvb";
		break;
		case 'u':
		cout<<"7@qkv";
		break;
		case 'U':
		cout<<"9wap5";
		break;
		case 'v':
		cout<<"<die#";
		break;
		case 'V':
		cout<<"#/>h.";
		break;
		case 'w':
		cout<<"&9w[.";
		break;
		case 'W':
		cout<<"o)].$";
		break;
		case 'x':
		cout<<"2@?9b";
		break;
		case 'X':
		cout<<"-7@v#";
		break;
		case 'y':
		cout<<"/0@i$";
		break;
		case 'Y':
		cout<<"^2@05";
		break;
		case 'z':
		cout<<"rb#ba";
		break;
		case 'Z':
		cout<<"c+i#$";
		break;
		//all letters --------------------------------------------------------------------------
		//52 lettes (upper case + lower case)
		case '0':
		cout<<"-&n$$";
		break;
		case '1':
		cout<<"<^2!#";
		break;
		case '2':
		cout<<"@^v$#";
		break;
		case '3':
		cout<<"ry!@#";
		break;
		case '4':
		cout<<"2=/ak";
		break;
		case '5':
		cout<<";39#.";
		break;
		case '6':
		cout<<"?h^fk";
		break;
		case '7':
		cout<<"#/595";
		break;
		case '8':
		cout<<"-~g5#";
		break;
		case '9':
		cout<<"p3o35";
		break;
		//all numbers ---------------------------------------------------------------
		//10 numbers
		case '~':
		cout<<"?6/,.";
		break;
		case '!':
		cout<<"/eq!#";
		break;
		case '#':
		cout<<"j:295";
		break;
		case '$':
		cout<<"/9wp.";
		break;
		case '%':
		cout<<"?qv5.";
		break;
		case '^':
		cout<<"-mq95";
		break;
		case '&':
		cout<<"@%e35";
		break;
		case '*':
		cout<<"95.ak";
		break;
		case '(':
		cout<<"@%056";
		break;
		case ')':
		cout<<"&!:#.";
		break;
		case '-':
		cout<<"/_sea";
		break;
		case '_':
		cout<<"6!9%k";
		break;
		case '=':
		cout<<"#ib5k";
		break;
		case '+':
		cout<<"_q2a5";
		break;
		case '[':
		cout<<"<-2v#";
		break;
		case ']':
		cout<<"/gw56";
		break;
		case '{':
		cout<<"&@%z#";
		break;
		case '}':
		cout<<"9xn#k";
		break;
		case ';':
		cout<<"@522q";
		break;
		case ':':
		cout<<"p6@v#";
		break;
		case '\'':
		cout<<"dnxw5";
		break;
		case '\"':
		cout<<"d@oik";
		break;
		case '\\':
		cout<<"\e@0b";
		break;
		case '|':
		cout<<"pq35.";
		break;
		case ',':
		cout<<";x@.b";
		break;
		case '<':
		cout<<"<605.";
		break;
		case '>':
		cout<<"-2q~#";
		break;
		case '.':
		cout<<"pr!$.";
		break;
		case '/':
		cout<<"pef#5";
		break;
		case '?':
		cout<<"rd%v5";
		break;
		case ' '://space
		cout<<";@235";
		break;
		
		// all symbols -------------------------------------------------------------------
		//31 symbols
		case '�':
		cout<<"1#1tg";
		break;
		case '�':
		cout<<"r~/3,";
		break;
		case '�':
		cout<<"p1@~)";
		break;
		case '�':
		cout<<"r13_#";
		break;
		case '�':
		cout<<"/8la=";
		break;
		case '�':
		cout<<"=p8<.";
		break;
		case '�':
		cout<<"1013z";
		break;
		case '�':
		cout<<"[?-wt";
		break;
		case '�':
		cout<<"pp@wi";
		break;
		case '�':
		cout<<"#(/2q";
		break;
		case '�':
		cout<<"/1^]a";
		break;
		case '�':
		cout<<"r1%l5";
		break;
		case '�':
		cout<<"p^,&y";
		break;
		case '�':
		cout<<"qb/=1";
		break;
		case '�':
		cout<<"=p_wb";
		break;
		case '�':
		cout<<"&;+~#";
		break;
		case '�':
		cout<<"&;:8$";
		break;
		case '�':
		cout<<"<;d@.";
		break;
		case '�':
		cout<<";>dd$";
		break;
		case '�':
		cout<<"c;cl#";
		break;
		case '�':
		cout<<":x&*u";
		break;
		case '�':
		cout<<"/&s:x";
		break;
		case '�':
		cout<<"[-60a";
		break;
		case '�':
		cout<<"lnn58";
		break;
		case '�':
		cout<<"@m4-i";
		break;
		case '�':
		cout<<"?n4}.";
		break;
		case '�':
		cout<<"?-[[$";
		break;
		case '�':
		cout<<"-nm;,";
		break;
		case '�':
		cout<<"=l4mk";
		break;
		case '�':
		cout<<"_$_7~";
		break;
		case '�':
		cout<<"7j+@i";
		break;
		case '�':
		cout<<"[l-tt";
		break;
		case '�':
		cout<<"hj7?#";
		break;
		case '�':
		cout<<"7+ji<";
		break;
		default:
		cout<<"INvalid cc";
		break;
		//all arbic letters
		//34
	}//for switch
}//for function 3


//-------------------------------------------------------------------------------------------
string code4 (char y)
{
	switch(y)
	{
		case 'a':
		cout<<"ai^)i";
		break;
		case 'A':
		cout<<"benz#";
		break;
		case 'b':
		cout<<"4i.$#";
		break;
		case 'B':
		cout<<";78.#";
		break;
		case 'c':
		cout<<"-45x#";
		break;
		case 'C':
		cout<<"810#]";
		break;
		case 'd':
		cout<<"z^ga#";
		break;
		case 'D':
		cout<<"&ee#$";
		break;
		case 'e':
		cout<<"?!a-b";
		break;
		case 'E':
		cout<<"@?vg$";
		break;
		case 'f':
		cout<<"32@#b";
		break;
		case 'F':
		cout<<"@lak.";
		break;
		case 'g':
		cout<<"q)i@a";
		break;
		case 'G':
		cout<<"{#50!";
		break;
		case 'h':
		cout<<"g$g?,";
		break;
		case 'H':
		cout<<"3fs?#";
		break;
		case 'i':
		cout<<"!3kpz";
		break;
		case 'I':
		cout<<"ka|1.";
		break;
		case 'j':
		cout<<"#!)m#";
		break;
		case 'J':
		cout<<"bg5[#";
		break;
		case 'k':
		cout<<"~x69#";
		break;
		case 'K':
		cout<<"&$@+#";
		break;
		case 'l':
		cout<<"pwaz5";
		break;
		case 'L':
		cout<<"!hf#$";
		break;
		case 'm':
		cout<<"@][#n";
		break;
		case 'M':
		cout<<"%@$s2";
		break;
		case 'n':
		cout<<"x*y.b";
		break;
		case 'N':
		cout<<"/x-a#";
		break;
		case 'o':
		cout<<"^v7#b";
		break;
		case 'O':
		cout<<"c~wka";
		break;
		case 'p':
		cout<<"pgi),";
		break;
		case 'P':
		cout<<"2,$ca";
		break;
		case 'q':
		cout<<"^#$;s";
		break;
		case 'Q':
		cout<<":0av#";
		break;
		case 'r':
		cout<<"!at3u";
		break;
		case 'R':
		cout<<"vegy.";
		break;
		case 's':
		cout<<"6i3.v";
		break;
		case 'S':
		cout<<"?#7ik";
		break;
		case 't':
		cout<<"r:3i,";
		break;
		case 'T':
		cout<<"46z!#";
		break;
		case 'u':
		cout<<"7%$^s";
		break;
		case 'U':
		cout<<"!$o/#";
		break;
		case 'v':
		cout<<";c%,i";
		break;
		case 'V':
		cout<<"75y+.";
		break;
		case 'w':
		cout<<"<9g-i";
		break;
		case 'W':
		cout<<"z5i]#";
		break;
		case 'x':
		cout<<"@e4!$";
		break;
		case 'X':
		cout<<"+jqv#";
		break;
		case 'y':
		cout<<"roe#,";
		break;
		case 'Y':
		cout<<"@eez$";
		break;
		case 'z':
		cout<<"=.##a";
		break;
		case 'Z':
		cout<<"c{abi";
		break;
		//all letters --------------------------------------------------------------------------
		//52 lettes (upper case + lower case)
		case '0':
		cout<<"?&#m$";
		break;
		case '1':
		cout<<"ce%vk";
		break;
		case '2':
		cout<<"2ef#$";
		break;
		case '3':
		cout<<"11@!$";
		break;
		case '4':
		cout<<"%1p#i";
		break;
		case '5':
		cout<<"<~s,a";
		break;
		case '6':
		cout<<"[h@ks";
		break;
		case '7':
		cout<<"yi9bi";
		break;
		case '8':
		cout<<"t~gkk";
		break;
		case '9':
		cout<<"=xg~#";
		break;
		//all numbers ---------------------------------------------------------------
		//10 numbers
		case '~':
		cout<<"?-p..";
		break;
		case '!':
		cout<<"=%@*#";
		break;
		case '#':
		cout<<"h;@9#";
		break;
		case '$':
		cout<<"|vgy5";
		break;
		case '%':
		cout<<"?@!5.";
		break;
		case '^':
		cout<<"-4s@#";
		break;
		case '&':
		cout<<"@%285";
		break;
		case '*':
		cout<<"*ibak";
		break;
		case '(':
		cout<<"eqzi6";
		break;
		case ')':
		cout<<"c;!$.";
		break;
		case '-':
		cout<<"/+@9a";
		break;
		case '_':
		cout<<"6ssek";
		break;
		case '=':
		cout<<"#bkii";
		break;
		case '+':
		cout<<"_@e#5";
		break;
		case '[':
		cout<<"?:9%a";
		break;
		case ']':
		cout<<"/g0-.";
		break;
		case '{':
		cout<<"&@%g#";
		break;
		case '}':
		cout<<"9xm#k";
		break;
		case ';':
		cout<<"$2q2q";
		break;
		case ':':
		cout<<"p6!^#";
		break;
		case '\'':
		cout<<"c6805";
		break;
		case '\"':
		cout<<"dew.$";
		break;
		case '\\':
		cout<<"\q%zb";
		break;
		case '|':
		cout<<"pe85.";
		break;
		case ',':
		cout<<";x@ak";
		break;
		case '<':
		cout<<";405.";
		break;
		case '>':
		cout<<"meq85";
		break;
		case '.':
		cout<<"=1
