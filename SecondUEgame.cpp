
/*
void AMovingPlatform::MovePlatform(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += (PlatformVelocity * DeltaTime);
	SetActorLocation(CurrentLocation);
	float distanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (distanceMoved > MoveDistance)
	{
		float OverShoot = distanceMoved - MoveDistance;
		FString Name = GetName();
		UE_LOG(LogTemp, Display, TEXT("%s Configured Moved Distance: %f"), *Name, OverShoot);
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MoveDistance; // 100이 되면 다시 되돌아감(-1 하며..)
		SetActorLocation(StartLocation);
		PlatformVelocity *= -1;
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	UE_LOG(LogTemp, Display, TEXT("%s Rotating..."), *GetName());
}

*/