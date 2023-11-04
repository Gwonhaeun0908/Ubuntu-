import time
import os
import signal

def write_current_time():
    while True:
        current_time = time.strftime("%Y-%m-%d %H:%M:%S")
        with open("current_time.txt", "a") as file:
            file.write(current_time + "\n")
        time.sleep(10)

if __name__ == "__main":
    try:
        # fork를 사용하여 자식 프로세스 생성
        pid = os.fork()

        if pid == 0:  # 자식 프로세스
            # 세션 리더로부터 독립된 세션 생성
            os.setsid()
            # 작업 디렉토리 변경 (옵션)
            os.chdir("/")
            # 표준 입출력 및 에러을 /dev/null로 리디렉션 (옵션)
            os.open("/dev/null", os.O_RDWR)
            os.dup(0)
            os.dup(0)
            # 자식 프로세스를 데몬으로 실행
            write_current_time()
        else:  # 부모 프로세스
            # 부모 프로세스는 종료
            os._exit(0)
    except Exception as e:
        print(f"Error: {e}")


