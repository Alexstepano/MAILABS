//копирование
00, ,<,91
91,0,<,91
91,1,<,91
91,2,<,91
// проходим слово
91, ,>,92
//берем знак и несем
92,1, ,921
92,2, ,922
92,0, ,920
921, ,>,9211
922, ,>,9222
920, ,>,9200
9200,0,>,9200
9200,1,>,9200
9200,2,>,9200
9211,0,>,9211
9211,1,>,9211
9211,2,>,9211
9222,0,>,9222
9222,1,>,9222
9222,2,>,9222
9200, ,>,92000
9222, ,>,92222
9211, ,>,92111
92222,0,>,92222
92222,1,>,92222
92222,2,>,92222
92111,0,>,92111
92111,1,>,92111
92111,2,>,92111
92000,0,>,92000
92000,1,>,92000
92000,2,>,92000
92000, ,0,93
92222, ,2,93
92111, ,1,93
//возвращаем цифру
93,0,<,930
93,1,<,931
93,2,<,932
930,0,<,930
930,1,<,930
930,2,<,930
931,0,<,931
931,1,<,931
931,2,<,931
932,0,<,932
932,1,<,932
932,2,<,932
930, ,<,9300
931, ,<,9311
932, ,<,9322
9300,0,<,9300
9300,1,<,9300
9300,2,<,9300
9311,0,<,9311
9311,1,<,9311
9311,2,<,9311
9322,0,<,9322
9322,1,<,9322
9322,2,<,9322
9300, ,0,95
9311, ,1,95
9322, ,2,95
//БЕРЕМ НОВУЮ ЦИФРУ
95,0,>,92
95,1,>,92
95,2,>,92
92, ,>,950
950,1,>,950
950,2,>,950
950,0,>,950
950, ,<,97

//скопировали - 9ый алфавит 
//а теперь изменяем
97,1, ,971
97,2, ,972
97,0, ,970
971, ,<,9710
970, ,<,9700
972, ,<,9720
//цифру украл(кто? Я)
9720,0,2,988
9700,0,0,988
9710,0,1,988
9700,1,3,988
9710,1,4,988
9720,1,5,988
9700,2,6,988
9710,2,7,988
9720,2,8,988
9710, ,>,9731
9731, ,1,988
9700, ,>,9730
9730, ,0,988
9720, ,>,9732
9732, ,2,988

//они достали 988 состояние? зачем? А,ОНИ БУДУТ ДВИГАТЬ РАБОЧУЮ ЯЧЕЙКУ ВЛЕВО.ХОДУ
988,0,<,97
988,1,<,97
988,2,<,97
988,3,<,97
988,4,<,97
988,5,<,97
988,6,<,97
988,7,<,97
988,8,<,97
97, ,>,mouse
//запускаем мышь c шипом-иглой-спиной,чтобы сшить все числа
mouse,0,>,mouse
mouse,1,>,mouse
mouse,2,>,mouse
mouse,3,>,mouse
mouse,4,>,mouse
mouse,5,>,mouse
mouse,6,>,mouse
mouse,7,>,mouse
mouse,8,>,mouse
mouse, ,>,mouse+spine
//мышь с иглой кродетца
mouse+spine,1,<,mouse+spine/
mouse+spine,2,<,mouse+spine/
mouse+spine,3,<,mouse+spine/
mouse+spine,4,<,mouse+spine/
mouse+spine,5,<,mouse+spine/
mouse+spine,6,<,mouse+spine/
mouse+spine,7,<,mouse+spine/
mouse+spine,8,<,mouse+spine/
mouse+spine,0,<,mouse+spine/

mouse+spine/,0,<,mouse+spine/
mouse+spine/,1,<,mouse+spine/
mouse+spine/,2,<,mouse+spine/
mouse+spine/,3,<,mouse+spine/
mouse+spine/,4,<,mouse+spine/
mouse+spine/,5,<,mouse+spine/
mouse+spine/,6,<,mouse+spine/
mouse+spine/,7,<,mouse+spine/
mouse+spine/,8,<,mouse+spine/
mouse+spine/, ,<,mouse+spine=
mouse+spine=, ,>,mouse1
mouse1, ,>,mouse
//счет древних шиз...руссов
//ноль(0)
mouse+spine=,0, ,mouse+spine=0
mouse+spine=0, ,>,mouse+spine=0=
mouse+spine=0=,0,>,mouse+spine=0=
mouse+spine=0=,1,>,mouse+spine=0=
mouse+spine=0=,2,>,mouse+spine=0=
mouse+spine=0=,3,>,mouse+spine=0=
mouse+spine=0=,4,>,mouse+spine=0=
mouse+spine=0=,5,>,mouse+spine=0=
mouse+spine=0=,6,>,mouse+spine=0=
mouse+spine=0=,7,>,mouse+spine=0=
mouse+spine=0=,8,>,mouse+spine=0=
mouse+spine=0=, ,0,mouse+spine/
//целковый(1)
mouse+spine=,1, ,mouse+spine=1
mouse+spine=1, ,>,mouse+spine=1=
mouse+spine=1=,0,>,mouse+spine=1=
mouse+spine=1=,1,>,mouse+spine=1=
mouse+spine=1=,2,>,mouse+spine=1=
mouse+spine=1=,3,>,mouse+spine=1=
mouse+spine=1=,4,>,mouse+spine=1=
mouse+spine=1=,5,>,mouse+spine=1=
mouse+spine=1=,6,>,mouse+spine=1=
mouse+spine=1=,7,>,mouse+spine=1=
mouse+spine=1=,8,>,mouse+spine=1=
mouse+spine=1=, ,1,mouse+spine/
//полушка(2)
mouse+spine=,2, ,mouse+spine=2
mouse+spine=2, ,>,mouse+spine=2=
mouse+spine=2=,0,>,mouse+spine=2=
mouse+spine=2=,1,>,mouse+spine=2=
mouse+spine=2=,2,>,mouse+spine=2=
mouse+spine=2=,3,>,mouse+spine=2=
mouse+spine=2=,4,>,mouse+spine=2=
mouse+spine=2=,5,>,mouse+spine=2=
mouse+spine=2=,6,>,mouse+spine=2=
mouse+spine=2=,7,>,mouse+spine=2=
mouse+spine=2=,8,>,mouse+spine=2=
mouse+spine=2=, ,2,mouse+spine/
//четвертушка(3)
mouse+spine=,3, ,mouse+spine=3
mouse+spine=3, ,>,mouse+spine=3=
mouse+spine=3=,0,>,mouse+spine=3=
mouse+spine=3=,1,>,mouse+spine=3=
mouse+spine=3=,2,>,mouse+spine=3=
mouse+spine=3=,3,>,mouse+spine=3=
mouse+spine=3=,4,>,mouse+spine=3=
mouse+spine=3=,5,>,mouse+spine=3=
mouse+spine=3=,6,>,mouse+spine=3=
mouse+spine=3=,7,>,mouse+spine=3=
mouse+spine=3=,8,>,mouse+spine=3=
mouse+spine=3=, ,3,mouse+spine/
//осьмушка(4)
mouse+spine=,4, ,mouse+spine=4
mouse+spine=4, ,>,mouse+spine=4=
mouse+spine=4=,0,>,mouse+spine=4=
mouse+spine=4=,1,>,mouse+spine=4=
mouse+spine=4=,2,>,mouse+spine=4=
mouse+spine=4=,3,>,mouse+spine=4=
mouse+spine=4=,4,>,mouse+spine=4=
mouse+spine=4=,5,>,mouse+spine=4=
mouse+spine=4=,6,>,mouse+spine=4=
mouse+spine=4=,7,>,mouse+spine=4=
mouse+spine=4=,8,>,mouse+spine=4=
mouse+spine=4=, ,4,mouse+spine/
//пудовичок(5)
mouse+spine=,5, ,mouse+spine=5
mouse+spine=5, ,>,mouse+spine=5=
mouse+spine=5=,0,>,mouse+spine=5=
mouse+spine=5=,1,>,mouse+spine=5=
mouse+spine=5=,2,>,mouse+spine=5=
mouse+spine=5=,3,>,mouse+spine=5=
mouse+spine=5=,4,>,mouse+spine=5=
mouse+spine=5=,5,>,mouse+spine=5=
mouse+spine=5=,6,>,mouse+spine=5=
mouse+spine=5=,7,>,mouse+spine=5=
mouse+spine=5=,8,>,mouse+spine=5=
mouse+spine=5=, ,5,mouse+spine/
//медячок(6)
mouse+spine=,6, ,mouse+spine=6
mouse+spine=6, ,>,mouse+spine=6=
mouse+spine=6=,0,>,mouse+spine=6=
mouse+spine=6=,1,>,mouse+spine=6=
mouse+spine=6=,2,>,mouse+spine=6=
mouse+spine=6=,3,>,mouse+spine=6=
mouse+spine=6=,4,>,mouse+spine=6=
mouse+spine=6=,5,>,mouse+spine=6=
mouse+spine=6=,6,>,mouse+spine=6=
mouse+spine=6=,7,>,mouse+spine=6=
mouse+spine=6=,8,>,mouse+spine=6=
mouse+spine=6=, ,6,mouse+spine/
//серебрячок(7)
mouse+spine=,7, ,mouse+spine=7
mouse+spine=7, ,>,mouse+spine=7=
mouse+spine=7=,0,>,mouse+spine=7=
mouse+spine=7=,1,>,mouse+spine=7=
mouse+spine=7=,2,>,mouse+spine=7=
mouse+spine=7=,3,>,mouse+spine=7=
mouse+spine=7=,4,>,mouse+spine=7=
mouse+spine=7=,5,>,mouse+spine=7=
mouse+spine=7=,6,>,mouse+spine=7=
mouse+spine=7=,7,>,mouse+spine=7=
mouse+spine=7=,8,>,mouse+spine=7=
mouse+spine=7=, ,7,mouse+spine/
//золотничок(8)
mouse+spine=,8, ,mouse+spine=8
mouse+spine=8, ,>,mouse+spine=8=
mouse+spine=8=,0,>,mouse+spine=8=
mouse+spine=8=,1,>,mouse+spine=8=
mouse+spine=8=,2,>,mouse+spine=8=
mouse+spine=8=,3,>,mouse+spine=8=
mouse+spine=8=,4,>,mouse+spine=8=
mouse+spine=8=,5,>,mouse+spine=8=
mouse+spine=8=,6,>,mouse+spine=8=
mouse+spine=8=,7,>,mouse+spine=8=
mouse+spine=8=,8,>,mouse+spine=8=
mouse+spine=8=, ,8,mouse+spine/
//все,русы кончились -запускаем крысюка,чтобы съел нули незначащие
mouse+spine, ,<,ratkin
ratkin, ,<,clanrat
clanrat,0,<,clanrat
clanrat,1,<,clanrat
clanrat,2,<,clanrat
clanrat,3,<,clanrat
clanrat,4,<,clanrat
clanrat,5,<,clanrat
clanrat,6,<,clanrat
clanrat,7,<,clanrat
clanrat,8,<,clanrat
clanrat, ,>,vermintide
//волна крыс съедает незначащие нули
vermintide,0, ,vermintide1
vermintide1, ,>,vermintide
vermintide,1,>,ratatouille
vermintide,2,>,ratatouille
vermintide,3,>,ratatouille
vermintide,4,>,ratatouille
vermintide,5,>,ratatouille
vermintide,6,>,ratatouille
vermintide,7,>,ratatouille
vermintide,8,>,ratatouille
vermintide, ,<,repluse
repluse, ,0,ratatouille
//крысы наелись,теперь мы в раттатуе, доходим до конца и заканчиваем
ratatouille,0,>,ratatouille
ratatouille,1,>,ratatouille
ratatouille,2,>,ratatouille
ratatouille,3,>,ratatouille
ratatouille,4,>,ratatouille
ratatouille,5,>,ratatouille
ratatouille,6,>,ratatouille
ratatouille,7,>,ratatouille
ratatouille,8,>,ratatouille
ratatouille, , ,ratatouille
//КОНЕЦ