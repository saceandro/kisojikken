(define (fact2 n)
  (define (inner-fact-iter n acc)
    (if (< n 1)
	acc
	(inner-fact-iter (- n 1) (* n acc))))
  (inner-fact-iter n 1))

(define (fact3 n)
  (letrec ((inner-fact-iter (lambda (n acc)
			      (if (< n 1)
				  acc
				  (inner-fact-iter (- n 1) (* n acc))))))
    (inner-fact-iter n 1)))