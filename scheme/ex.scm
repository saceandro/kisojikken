(display (+ (- (* (* 1 2) 3) (* 4 5)) (+ (* 6 7) (* 8 9))))
(display "\n")

(display "Hello world!\n")

(define x (+ 0 2))
(display x) (display "\n")
(display (+ x 1)) (display "\n")
(define y x)
(display y)(display "\n")
(set! x 2) (display x) (display "\n")
(display y)(display "\n")

(define square (lambda (x) (* x x)))
(display (square y)) (display "\n")

(define (sum f x y) (+ (f x) (f y)))
(display (sum square 2 3)) (display "\n")

(define (apply-and-add f x) (lambda (y) (+ (f y) x)))
(display ((apply-and-add square 1) 3)) (display "\n")