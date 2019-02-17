(define (my-assoc n alist)
  (cond ((null? alist) #f)
	((equal? n (car (car alist))) (car alist))
	(else (my-assoc n (cdr alist)))))