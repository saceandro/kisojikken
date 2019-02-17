(define (my-car x) (car x))
(my-car (list 1 2))

(define (my-length l)
  (if (null? l)
      0
      (+ 1 (my-length (cdr l)))))
(define (my-map f l)
  (if (null? l)
      l
      (cons (f (car l)) (my-map f (cdr l)))))
(define (my-fold op acc l)
  (if (null? l)
      acc
      (my-fold op (op (car l) acc) (cdr l))))

(define sample-alist
  '((1 . "One") (2 . "Two") (3 . "Three") (4 . "Four")))

(define l1 (list 1 2))
(define l2 l1)
(define l3 (list 1 2))
(eq? l1 l2)
(eq? l1 l3)
(equal? l1 l3)

(define (zero) (display "Hello!\n") 0)

(let ((ignore (lambda (x) (display "second\n") 0)))
  (ignore (begin (display "first\n") 1)))
(let ((add-and-apply (lambda (f x)
		       (lambda (y) (f (+ y x))))))
  ((add-and-apply square 1) 2))