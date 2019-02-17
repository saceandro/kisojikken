(define fact
  (let ((Y (lambda (F)
	     ((lambda (s) (F (lambda (x) ((s s) x))))
	      (lambda (s) (F (lambda (x) ((s s) x))))))))
    (Y (lambda (f)
	 (lambda (n)
	   (if (= n 0)
	       1
	       (* n (f (- n 1)))))))))