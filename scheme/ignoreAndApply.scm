(define (ignore-and-apply f x y)
  (display "second\n")
  (f y))
(define (square x)
  (display "third\n")
  (* x x))
(ignore-and-apply square (begin (display "first\n") 2) 3)