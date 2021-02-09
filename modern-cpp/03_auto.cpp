/**
 * auto 사용 예제 3
 * auto를 '사용자 정의형'인 클래스에도 사용 가능
 */
struct HealthTrainer {
    int squat;
    int bench_press;
    int deadlift;
};

int main()
{
    auto* ht = new HealthTrainer();
    return 0;
}
