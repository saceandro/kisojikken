;; 奇数なら1,偶数なら0を返す関数odd
;; 引数を2で割った余りを返している
(define (odd a)
  (modulo a 2))

;; 5つの整数を引数として受け取り、そのうち奇数が偶数より多い場合は真を返し、層でない場合は偽を返す述語even<odd?
;; (odd a)から(odd e)までを足し合わせ、それと2との大小関係を比較している。3以上なら、真が返る。
(define (even<odd? a b c d e)
  (< 2 (+ (+ (+ (+ (odd a) (odd b)) (odd c)) (odd d)) (odd e))))

;; odd1を略記せずに書いた関数odd2
(define odd2
  (lambda(a) (modulo a 2)))

;; even<odd?を略記せずに書いた関数even<odd2
(define even<odd2?
  (lambda (a b c d e) (< 2 (+ (+ (+ (+ (odd2 a) (odd2 b)) (odd2 c)) (odd2 d)) (odd2 e)))))
