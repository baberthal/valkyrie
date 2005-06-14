/* We need these in here so we can find them in the event of
   having to generate a MsgBox prior to Config being initialised,
   eg. in main() */

/* XPM */
static const char *msg_query_xpm[] = {
"24 24 22 1",
"   c None",
".  c #666699",
"+  c #6666CC",
"@  c #333399",
"#  c #6666FF",
"$  c #9966CC",
"%  c #9999CC",
"&  c #9999FF",
"*  c #CCCCCC",
"=  c #000099",
"-  c #336699",
";  c #CCCCFF",
">  c #CC99FF",
",  c #3333CC",
"'  c #003399",
")  c #FFFFFF",
"!  c #3366CC",
"~  c #99CCFF",
"{  c #999999",
"]  c #330099",
"^  c #663399",
"/  c #3300CC",
"         ..+..+         ",
"        @#$%&*=@@       ",
"       -=&&;&&;&=@      ",
"      ++>&,'@&;%&=@     ",
"     .,&&+%  @&;)&=!    ",
"    @=&~&={   @&&)+]    ",
"    !&))&+=%   @&&;'    ",
"    ^&)&&+={   @&&)/    ",
"    -&;&&+=+   +&;)=    ",
"    %]&,@/@   =$&)@.    ",
"     %===    =!&&=,     ",
"            =,&&=,      ",
"           @,;&=,       ",
"          %+&+=,        ",
"          ,&&=,         ",
"          ,&&=          ",
"          =+=@          ",
"                        ",
"          ====          ",
"         =&)),@         ",
"         =&)&+@         ",
"         @&&%=+         ",
"         @@,+=.         ",
"          ,.+.          "};



/* XPM */
static const char *msg_fatal_xpm[] = {
"22 22 3 1",
"   c None",
".  c #000000",
"+  c #FF0000",
"        ......        ",
"      ..++++++..      ",
"    ..++++++++++..    ",
"   .++++......++++.   ",
"  .+++..      ..+++.  ",
"  .++.        .++++.  ",
" .++.        .+++.++. ",
" .++.       .+++..++. ",
".++.       .+++.  .++.",
".++.      .+++.   .++.",
".++.     .+++.    .++.",
".++.    .+++.     .++.",
".++.   .+++.      .++.",
".++.  .+++.       .++.",
" .++..+++.       .++. ",
" .++.+++.        .++. ",
"  .++++.        .++.  ",
"  .+++...     ..+++.  ",
"   .++++......++++.   ",
"    ..++++++++++..    ",
"      ..++++++..      ",
"        ......        "};





/* XPM */
static const char *msg_warn_xpm[] = {
"21 20 45 1",
"   c None",
".  c #484648",
"+  c #B64549",
"@  c #B44145",
"#  c #B03B40",
"$  c #BB4C50",
"%  c #B8484C",
"&  c #B44246",
"*  c #C2585B",
"=  c #BF5457",
"-  c #BC4E52",
";  c #C76062",
">  c #C35A5D",
",  c #FFFFFF",
"'  c #CE6B6D",
")  c #CB6669",
"!  c #BD5054",
"~  c #B34045",
"{  c #D27274",
"]  c #BA4A4E",
"^  c #D97F7F",
"/  c #D47677",
"(  c #CF6D6F",
"_  c #000000",
":  c #BA4B4F",
"<  c #B54247",
"[  c #AF3A3F",
"}  c #818181",
"|  c #AF393E",
"1  c #646464",
"2  c #AE383D",
"3  c #A92F35",
"4  c #C96366",
"5  c #CA6567",
"6  c #AD353A",
"7  c #A82D33",
"8  c #C45B5E",
"9  c #C45C5F",
"0  c #DFDFDF",
"a  c #AB3237",
"b  c #A62A30",
"c  c #A6292F",
"d  c #BF5356",
"e  c #B13D42",
"f  c #C9C9C9",
"         ...         ",
"        .+@#.        ",
"        .$%&.        ",
"       .*=-%@.       ",
"       .;>,$+.       ",
"      .');,!%~.      ",
"      .{',,,]&.      ",
"     .^/(,_,:<[.     ",
"     ./{,}_},&|.     ",
"    .'(',1_1,~23.    ",
"    .45,,}_},,67.    ",
"   .*89,,0_0,,abc.   ",
"   .!d,,,,_,,,,cc.   ",
"  .+%],,,,,,,,,ccc.  ",
"  .e~,,,,f_f,,,,cc.  ",
" .a62,,,,f_f,,,,ccc. ",
" .b7,,,,,,,,,,,,,cc. ",
".ccccccccccccccccccc.",
".ccccccccccccccccccc.",
" ................... "};



/* XPM */
static const char *msg_info_xpm[] = {
"20 21 233 2",
"    c None",
".   c #385467",
"+   c #0A3F68",
"@   c #0D4068",
"#   c #B9BDBE",
"$   c #C9CDCF",
"%   c #D6D9DB",
"&   c #C9D3D9",
"*   c #9AB1C0",
"=   c #819EAD",
"-   c #C8CACA",
";   c #DDE1E4",
">   c #D8E1E6",
",   c #CFDCE3",
"'   c #C9D8E2",
")   c #BCD1DD",
"!   c #ADC7D5",
"~   c #9CBBCB",
"{   c #84A7BA",
"]   c #668EA4",
"^   c #CFD1D3",
"/   c #E5EBEE",
"(   c #D2E1E9",
"_   c #B3CDDB",
":   c #9CBED1",
"<   c #84AEC6",
"[   c #5495B5",
"}   c #5295B6",
"|   c #3885AD",
"1   c #4187AC",
"2   c #4C86A6",
"3   c #427797",
"4   c #BABFC2",
"5   c #E0E8EA",
"6   c #C8DAE3",
"7   c #A8C8D8",
"8   c #7FAFC7",
"9   c #5594B5",
"0   c #FFFFFF",
"a   c #136E9D",
"b   c #0F699A",
"c   c #166A99",
"d   c #1F6C99",
"e   c #2C6F97",
"f   c #24668D",
"g   c #8E9CA2",
"h   c #D2DBE0",
"i   c #C3D7E0",
"j   c #90B9CE",
"k   c #65A1BD",
"l   c #3A86AD",
"m   c #0D5F92",
"n   c #0C5C8F",
"o   c #0D5C8F",
"p   c #105E90",
"q   c #145E8C",
"r   c #18547A",
"s   c #0D4169",
"t   c #0F4269",
"u   c #AEC2CD",
"v   c #C8D8E0",
"w   c #A2C2D3",
"x   c #659EBD",
"y   c #3B88AC",
"z   c #1A72A1",
"A   c #0F6A9A",
"B   c #0D5F91",
"C   c #0C5C8E",
"D   c #0C5B8E",
"E   c #0E5C8F",
"F   c #0F5C8E",
"G   c #105581",
"H   c #10446E",
"I   c #09395E",
"J   c #6A8998",
"K   c #BCCED8",
"L   c #B4CDDA",
"M   c #82AFC7",
"N   c #3E87AE",
"O   c #2278A3",
"P   c #0F6A9B",
"Q   c #0C6395",
"R   c #0D6093",
"S   c #0D5E91",
"T   c #0E5E91",
"U   c #0D5484",
"V   c #0D4671",
"W   c #1D4B72",
"X   c #093E67",
"Y   c #82A3B3",
"Z   c #B7CCD7",
"`   c #8EB6CB",
" .  c #5A96B6",
"..  c #2176A1",
"+.  c #116B9B",
"@.  c #0C6295",
"#.  c #0D5E90",
"$.  c #0E5D90",
"%.  c #0E5587",
"&.  c #0B446C",
"*.  c #0C3E68",
"=.  c #093E66",
"-.  c #7DA0B1",
";.  c #A6C1D0",
">.  c #72A5C0",
",.  c #4184A9",
"'.  c #156D9C",
").  c #0D6698",
"!.  c #196595",
"~.  c #0E5E90",
"{.  c #0E5485",
"].  c #0B3C65",
"^.  c #6D93A8",
"/.  c #98B7C9",
"(.  c #619AB6",
"_.  c #2D78A1",
":.  c #126999",
"<.  c #0C5F92",
"[.  c #176494",
"}.  c #0D5081",
"|.  c #093961",
"1.  c #0A3860",
"2.  c #093D65",
"3.  c #58849E",
"4.  c #89ADC1",
"5.  c #5790AF",
"6.  c #25739C",
"7.  c #0F6596",
"8.  c #0E5B8E",
"9.  c #0C4D7B",
"0.  c #08365E",
"a.  c #0A365B",
"b.  c #062A43",
"c.  c #467490",
"d.  c #789FB6",
"e.  c #4986A6",
"f.  c #1D6C98",
"g.  c #0C5F91",
"h.  c #0C5D90",
"i.  c #0D5D90",
"j.  c #0D5A8C",
"k.  c #0E5889",
"l.  c #0B4773",
"m.  c #073056",
"n.  c #15324B",
"o.  c #052337",
"p.  c #255672",
"q.  c #5B88A1",
"r.  c #4780A0",
"s.  c #196693",
"t.  c #0C5A8D",
"u.  c #0C5A8C",
"v.  c #0C5689",
"w.  c #0C578A",
"x.  c #0D578A",
"y.  c #0E5787",
"z.  c #0E507C",
"A.  c #0A3D66",
"B.  c #073055",
"C.  c #1D415A",
"D.  c #000101",
"E.  c #356786",
"F.  c #3B7395",
"G.  c #1C628E",
"H.  c #0E5A8A",
"I.  c #0E598A",
"J.  c #0D588A",
"K.  c #1F6291",
"L.  c #0B5183",
"M.  c #0B5082",
"N.  c #0F5383",
"O.  c #0F4C7A",
"P.  c #0D456E",
"Q.  c #083659",
"R.  c #03192A",
"S.  c #00060A",
"T.  c #10425C",
"U.  c #225A7F",
"V.  c #185883",
"W.  c #0E5281",
"X.  c #0D5382",
"Y.  c #1B517C",
"Z.  c #0A416B",
"`.  c #08365B",
" +  c #082A48",
".+  c #234965",
"++  c #000000",
"@+  c #0A395E",
"#+  c #0A4370",
"$+  c #0D4879",
"%+  c #114A7C",
"&+  c #1E5582",
"*+  c #1D5380",
"=+  c #1E5481",
"-+  c #1E5380",
";+  c #1E5280",
">+  c #1E517E",
",+  c #1C4B77",
"'+  c #18436B",
")+  c #072A4E",
"!+  c #052141",
"~+  c #020C16",
"{+  c #053057",
"]+  c #0A3E69",
"^+  c #0A416E",
"/+  c #08416F",
"(+  c #06406E",
"_+  c #073F6C",
":+  c #083D6C",
"<+  c #083C6A",
"[+  c #063763",
"}+  c #052E58",
"|+  c #072B53",
"1+  c #051E40",
"2+  c #052448",
"3+  c #053054",
"4+  c #05325B",
"5+  c #063660",
"6+  c #05335D",
"7+  c #04325D",
"8+  c #04305B",
"9+  c #052951",
"0+  c #052346",
"a+  c #06213E",
"b+  c #020B10",
"c+  c #082A49",
"d+  c #06264B",
"e+  c #072949",
"f+  c #052545",
"g+  c #000102",
"h+  c #000509",
"i+  c #062A45",
"j+  c #7D8487",
"              . + + + + +               ",
"          @ + # $ % & * = + +           ",
"        + - ; > , ' ) ! ~ { ] +         ",
"      + ^ / ( _ : < [ } | 1 2 3 +       ",
"    + 4 5 6 7 8 9 0 0 a b c d e f +     ",
"  @ g h i j k l 0 0 0 0 m n o p q r s   ",
"  t u v w x y z A 0 0 B C D D E F G H   ",
"I J K L M N O P Q R S n n n o T T U V W ",
"X Y Z `  ...+.@.R T #.n o o $.T T %.&.*.",
"=.-.;.>.,.'.).0 0 0 0 0 !.~.T T T {.+ ].",
"X ^./.(._.:.Q <.T 0 0 0 [.~.T T E }.|.1.",
"2.3.4.5.6.7.<.S T 0 0 0 o $.T T 8.9.0.a.",
"b.c.d.e.f.g.n h.i.0 0 0 j.o o ~.k.l.m.n.",
"o.p.q.r.s.C D t.u.0 0 0 v.w.x.y.z.A.B.C.",
"  D.E.F.G.H.I.J.K.0 0 0 L.M.N.O.P.Q.R.  ",
"  S.T.U.V.W.X.0 0 0 0 0 0 0 Y.Z.`. +.+  ",
"    ++@+#+$+%+&+*+=+-+;+>+,+'+)+!+~+    ",
"      ++{+]+^+/+(+_+:+<+[+}+|+1+++      ",
"        ++2+3+4+5+6+7+8+9+0+a+b+        ",
"          ++++++c+d+e+f+g+++h+          ",
"              ++++++++++i+j+            "};


/* XPM */
static const char * msg_error_xpm[] = {
"22 22 3 1",
"   c None",
".  c #000000",
"+  c #FF0000",
"        ......        ",
"      ..++++++..      ",
"    ..++++++++++..    ",
"   .++++......++++.   ",
"  .+++..      ..+++.  ",
"  .++.        .++++.  ",
" .++.        .+++.++. ",
" .++.       .+++..++. ",
".++.       .+++.  .++.",
".++.      .+++.   .++.",
".++.     .+++.    .++.",
".++.    .+++.     .++.",
".++.   .+++.      .++.",
".++.  .+++.       .++.",
" .++..+++.       .++. ",
" .++.+++.        .++. ",
"  .++++.        .++.  ",
"  .+++...     ..+++.  ",
"   .++++......++++.   ",
"    ..++++++++++..    ",
"      ..++++++..      ",
"        ......        "};
