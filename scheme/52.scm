0
(define a (+ (- (* (* 1 2) 3) (* 4 5)) (+ (* 6 7) (* 8 9))))
a
(define b a)
b
(let ((a 1)) b)
(define f (lambda (x) (+ x a)))
f
(f a)
(define c f)
c
(c a)
(define d 'f)
d
(d a)
(define g (lambda (x) 0))
(g d)
(g (d a))
(define h (lambda (x) (lambda (a) (+ x a))))
(h a 0)
((h a) 0)
((h (f a)) (g d))
