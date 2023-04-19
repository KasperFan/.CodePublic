def Move (n,start,goal,temp):
    if n >= 1:
        Move(n-1,start,temp,goal)
        print(f"Move disk {n} from {start} to {goal}")
        Move()