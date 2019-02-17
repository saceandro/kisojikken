(define (sqrt-loop x)
  (let ((guess 1.0))
    (while (not (good-enough-sqrt? x guess))
	   (set! guess (improve-sqrt x guess)))
    guess))

(define (sqrt-iter x guess)
  (if (good-enough-sqrt? x guess)
      guess
      (sqrt-iter x (improve-sqrt x guess))))

(define (square t) (* t t))
(define (good-enough-sqrt? x guess) (< (abs (- (square guess) x)) 0.001))
(define (improve-sqrt x guess) (/ (+ guess (/ x guess)) 2.0))
(define (sqrt x) (sqrt-iter x 1.0))

;; higher-order function
(define (newton-iter g d guess)
  (if (good-enough? g guess)
      guess
      (newton-iter g d (improve g d guess))))
(define (good-enough? g guess) (< (abs (g guess)) 0.001))
(define (improve g d guess) (- guess (/ (g guess) (d guess))))

(define (sqrt-base x) (lambda (t) (- (square t) x)))
(define (sqrt-deriv x) (lambda (t) (* 2.0 t)))
(define (sqrt2 x) (newton-iter (sqrt-base x) (sqrt-deriv x) 1.0))