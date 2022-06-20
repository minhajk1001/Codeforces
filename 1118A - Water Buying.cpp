    #include <iostream>
    #include <stdio.h>
    using namespace std;
     
    int main() {
    	
    	int test;
    	scanf("%d",&test);
    	
    	for(int t=0; t<test; t++){
    		long long int n,x;
    		double a,b;
    		cin>>n>>a>>b;
    		
    		double b1=b/2;
     
    		if((a==b1)||(a<b1))
    			x=n*a;
    		if((b1<a)&&(n%2==0))
    			x=(n/2)*b;
    		if((b1<a)&&(n%2!=0))
    			x=((n/2)*b)+a;
    			
    		cout<<x<<endl;
    			
    	}
    	
    	return 0;
    }
    
    

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

→Judgement Protocol
Test: #1, time: 15 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

4

10 1 3

7 3 2

1 1000 1

1000000000000 42 88

Output

10

9

1000

42000000000000

Answer

10

9

1000

42000000000000

Checker Log

ok 4 number(s): "10 9 1000 42000000000000"

Test: #2, time: 31 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

500

116602436426 575 522

962623690081 772 445

426262703497 629 447

62628894325 775 202

150450968417 784 982

229161735902 932 156

282707723857 537 728

339802329211 918 739

337317063340 506 679

16125660016 868 568

575462224593 263 940

734191890310 991 449

20404011431 68 355

666160449218 757 580

230164163676 328 934

891501899080 221 355

48910748511 545 922

619470338674 467 67

34180999835 504 691

991677959980 965 34

381208032501 895 221

21506147731 325 152

795298309896 153 302

862215208...

Output

30433235907186

214183771043572

95269714231985

6325518327499

73871425493040

17874615400356

102905611484121

125556960644013

114519143003930

4579687444544

151346565067959

164826079374595

1387472777308

193186530273220

75493845685728

158241587086700

22547855063655

20752256345579

11809535443151

16858525319660

42123487592145

1634467227805

120090044794296

9484367292867

189552252640112

102921954712300

142455088769950

1695435136640

77820977298928

224282382749443

217905390001710

2443538...

Answer

30433235907186

214183771043572

95269714231985

6325518327499

73871425493040

17874615400356

102905611484121

125556960644013

114519143003930

4579687444544

151346565067959

164826079374595

1387472777308

193186530273220

75493845685728

158241587086700

22547855063655

20752256345579

11809535443151

16858525319660

42123487592145

1634467227805

120090044794296

9484367292867

189552252640112

102921954712300

142455088769950

1695435136640

77820977298928

224282382749443

217905390001710

2443538...

Checker Log

ok 500 numbers

Test: #3, time: 15 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

500

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 1000 1000

1000000000000 499 1000

1000000000000 10...

Output

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

5...

Answer

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

500000000000000

499000000000000

5...

Checker Log

ok 500 numbers

Test: #4, time: 0 ms., memory: 132 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

495

1 1 1

1 1 2

1 1 3

1 1 4

1 1 5

1 1 6

1 1 7

1 1 8

1 1 9

1 1 10

1 1 11

1 2 1

1 2 2

1 2 3

1 2 4

1 2 5

1 2 6

1 2 7

1 2 8

1 2 9

1 2 10

1 2 11

1 3 1

1 3 2

1 3 3

1 3 4

1 3 5

1 3 6

1 3 7

1 3 8

1 3 9

1 3 10

1 3 11

1 4 1

1 4 2

1 4 3

1 4 4

1 4 5

1 4 6

1 4 7

1 4 8

1 4 9

1 4 10

1 4 11

1 5 1

1 5 2

1 5 3

1 5 4

1 5 5

1 5 6

1 5 7

1 5 8

1 5 9

1 5 10

1 5 11

2 1 1

2 1 2

2 1 3

2 1 4

2 1 5

2 1 6

2 1 7

2 1 8

2 1 9

2 1 10

2 1 11

2 2 1

2 2 2

2 2 3

2 2 4

2 2 ...

Output

1

1

1

1

1

1

1

1

1

1

1

2

2

2

2

2

2

2

2

2

2

2

3

3

3

3

3

3

3

3

3

3

3

4

4

4

4

4

4

4

4

4

4

4

5

5

5

5

5

5

5

5

5

5

5

1

2

2

2

2

2

2

2

2

2

2

1

2

3

4

4

4

4

4

4

4

4

1

2

3

4

5

6

6

6

6

6

6

1

2

3

4

5

6

7

8

8

8

8

1

2

3

4

5

6

7

8

9

10

10

2

3

3

3

3

3

3

3

3

3

3

3

4

5

6

6

6

6

6

6

6

6

4

5

6

7

8

9

9

9

9

9

9

5

6

7

8

9

10

11

12

12

12

12

6

7

8

9

10

11

12

13

14

15

15

2...

Answer

1

1

1

1

1

1

1

1

1

1

1

2

2

2

2

2

2

2

2

2

2

2

3

3

3

3

3

3

3

3

3

3

3

4

4

4

4

4

4

4

4

4

4

4

5

5

5

5

5

5

5

5

5

5

5

1

2

2

2

2

2

2

2

2

2

2

1

2

3

4

4

4

4

4

4

4

4

1

2

3

4

5

6

6

6

6

6

6

1

2

3

4

5

6

7

8

8

8

8

1

2

3

4

5

6

7

8

9

10

10

2

3

3

3

3

3

3

3

3

3

3

3

4

5

6

6

6

6

6

6

6

6

4

5

6

7

8

9

9

9

9

9

9

5

6

7

8

9

10

11

12

12

12

12

6

7

8

9

10

11

12

13

14

15

15

2...

Checker Log

ok 495 numbers

Test: #5, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

25 4 8

Output

100

Answer

100

Checker Log

ok 1 number(s): "100"

Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

26 5 9

Output

117

Answer

117

Checker Log

ok 1 number(s): "117"

Test: #7, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

27 4 9

Output

108

Answer

108

Checker Log

ok 1 number(s): "108"

Test: #8, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

28 23 53

Output

644

Answer

644

Checker Log

ok 1 number(s): "644"

Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

29 5 8

Output

117

Answer

117

Checker Log

ok 1 number(s): "117"

Test: #10, time: 15 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

30 1 3

Output

30

Answer

30

Checker Log

ok 1 number(s): "30"

Test: #11, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

31 1 6

Output

31

Answer

31

Checker Log

ok 1 number(s): "31"

Test: #12, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

32 4 7

Output

112

Answer

112

Checker Log

ok 1 number(s): "112"

Test: #13, time: 15 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

33 1 56

Output

33

Answer

33

Checker Log

ok 1 number(s): "33"

Test: #14, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

34 1 2

Output

34

Answer

34

Checker Log

ok 1 number(s): "34"

Test: #15, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

36 1 2

Output

36

Answer

36

Checker Log

ok 1 number(s): "36"

Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

35 1 2

Output

35

Answer

35

Checker Log

ok 1 number(s): "35"

Test: #17, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

39 1 2

Output

39

Answer

39

Checker Log

ok 1 number(s): "39"

Test: #18, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

40 2 4

Output

80

Answer

80

Checker Log

ok 1 number(s): "80"

Test: #19, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

45 6 7

Output

160

Answer

160

Checker Log

ok 1 number(s): "160"

Test: #20, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input

1

86 7 90

Output

602

Answer

602

Checker Log

ok 1 number(s): "602"

[close]
