def solution(people, limit):
    people.sort()  # 무게를 정렬
    left, right = 0, len(people) - 1
    cnt = 0

    while left <= right:
        # 가장 무거운 사람 + 가장 가벼운 사람을 함께 태우는 경우를 우선 처리
        if people[left] + people[right] <= limit:
            left += 1  # 가장 가벼운 사람 태움
        # 가장 무거운 사람은 항상 태움
        right -= 1
        cnt += 1  # 배 사용 횟수 증가

    return cnt
