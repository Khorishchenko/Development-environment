 #include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{
    if (str == NULL || sub == NULL){
        return -2;
    }
    //считаем длинну needle для того, чтобы
    //потом пройтись по ней циклом
    int len_sub = mx_strlen(sub);
    
    int i = 0;
    //проходим по каждому символу str
    while(str[i])
    {
        //совпадение i-елемента str и нулевого елемента sub
        if (str[i] == sub[0])
        {
            //цикл, который проверяет дальнейшую схожесть символов
            int j = 0;
            int tmp = i;
            while (str[tmp] == sub[j])
            {
                //строка sub найдена в str
                if (j == len_sub - 1)
                {
                    return i;
                }
                j++;
                tmp++;
            }
        }
        i++;
    }
    //если sub не найден в str
    return -1;
}

