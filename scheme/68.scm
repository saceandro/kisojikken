;; 不動点コンビネータ
(define (fix f)
  (lambda (x) ((f (fix f)) x)))

;(define fix
;  (lambda (f)
;    (lambda (n)
;      ((f (fix f)) x))))

(define fact6-sub
  (lambda (f)
    (lambda (n)
      (if (< n 1)
	  1
	  (* n ((f f) (- n 1)))))))

(define (fact6 n)
  ((fact6-sub fact6-sub) n))

(define (fix2 f)
  (lambda (x)
    ((f f) x)))

(define (fact5 n)
  (let ((g (fix fix)))
    (if (< n 1)
	1
	(* n (g (- n 1))))))