(define empty-list (list))
(cons 1 (cons 2 (cons 3 empty-list)))
(cons 1 (cons 2 (cons 3 4)))
(list 1 2 3 5 7 11)
(list (list 1 2) 3)
(list (quote +) 1 2)
(list? (list 1 2))
(equal? (list 1 2) (list 1))
(equal? (list (list 1 2) 3) (list 1 (list 2 3)))
(define x (+ 0 1))
(define y (+ x 1))
(let ((y (* 2 5)) (z 100))
  (+ y 1)
  (+ x y z))
((if (even? x) + *) 1 2)
(quote (+ 1 2))
(quote x)
(quote (1 2 3 4))
(list? (quote (1 3 2 5 6)))
(equal? (quote (1 2 3 5 7)) (list 1 2 3 5 7))
'(1 2 3 9 2 4)

(define (add-const x) (+ x a))
(define a 10)
(add-const 1)

(define (my-odd? n)
  (cond ((= n 0) #f)
	((< n 0) (my-even? (+ n 1)))
	(else (my-even? (- n 1)))))

(define (my-even? n)
  (cond ((= n 0) #t)
	((< n 0) (my-odd? (+ n 1)))
	(else (my-odd? (- n 1)))))