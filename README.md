# task_71_sem_3
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. Английский он к тому времени знал в совершенстве, и  его мечтой было изучить латынь. Поэтому попавшийся словарь был как раз кстати.
К сожалению, для полноценного изучения языка недостаточно только одного словаря: кроме англо-латинского необходим латинско-английский. За неимением лучшего он решил сделать второй словарь из первого.
Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов. Для каждого латинского слова, встречающегося где-либо в словаре, Вася предлагает найти все его переводы (то есть все английские слова, для которых наше латинское встречалось в его списке переводов), и считать их и только их переводами этого латинского слова.
Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.
Входные данные
В первой строке содержится единственное целое число N — количество английских слов в словаре. Далее следует N описаний. Каждое описание содержится в отдельной строке, в которой записано сначала английское слово, затем отделенный пробелами дефис (символ номер 45), затем разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.
Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов. Общее количество слов на входе не превышает 100000.
Выходные данные
В первой строке программа должна вывести количество слов в соответствующем данному латинско-английском словаре. Со второй строки выведите сам словарь, в точности соблюдая формат входных данных. В частности, первым должен идти перевод лексикографически минимального латинского слова, далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.
# task_73_sem_3
На доске выписаны n целых чисел. Все они пронумерованы от 1 до n.
Разрешается выбрать два произвольных числа, вытереть оба с доски и написать новое число, равное их среднему арифметическому. Новое число получает номер n+1. После этого снова выбираются два числа и вместо них записывается их среднее арифметическое, которому дается номер n+2 и т.д. Так продолжается до тех пор, пока на доске не останется только одно число. Чем больше будет это число, тем более успешной считается последовательность действий. Определите порядок действий, который приводит к максимально возможному числу в конце.
Входные данные
В первой строке записано целое число n (1⩽n⩽105). Во второй строке задаются n целых чисел, которые были первоначально записаны на доске. Все числа лежат в диапазоне от −10000 до 10000.
Выходные данные
Выведите n—1 строку, в каждой из которых должны быть записаны по два целых числа, определяющие номера тех чисел, которые выбираются на соответствующем шаге.
