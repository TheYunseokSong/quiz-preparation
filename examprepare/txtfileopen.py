책목록=open("책 목록.txt","r")
책배열=[]
for a in 책목록:
    책배열.append(a)

책배열.sort()
print(책배열)
책목록.close()

정렬=open("책 목록.txt","w")
for b in range(len(책배열)):
    정렬.write(책배열)
정렬.close
