YC, BC = map(int, input().split())
YB, GB, BB = map(int, input().split())

YCR = 2 * YB + GB
BCR = GB + 3 * BB

print(max(0, YCR-YC) + max(0, BCR-BC))