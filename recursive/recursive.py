def recursive_function(i):
    if i == 100:
        return
    print('recursive function has been called',i,'times')
    recursive_function(i+1)
    print(i,'th recursive function has been closed')


recursive_function(1)
