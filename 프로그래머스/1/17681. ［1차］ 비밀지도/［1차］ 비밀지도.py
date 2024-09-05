def solution(n, arr1, arr2):
    answer = [''] * n
    
    for i in range(n) :
        #arr1[i] = bin(arr1[i])[2:n]
        arr1[i] = '{0:0{1}b}'.format(arr1[i], n)
        arr2[i] = '{0:0{1}b}'.format(arr2[i], n)
        
    for i in range(n) :
        answer_str = [''] * n
        str1 = list(arr1[i])
        str2 = list(arr2[i])
        for j in range(n) :
            if str1[j]=='0' and str2[j]=='0' :
                answer_str[j]=" "
            else :
                answer_str[j]="#"
        
        answer[i] = ''.join(answer_str)
        
    return answer